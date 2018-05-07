#include<stdio.h>
typedef struct Car
{
	int num;
	double gas;

} Car;

int main(void)
{
	printf("int 형의 크기는 %d바이트입니다.\n", sizeof(int));
	printf("double 형의 크기는 %d바이트입니다.\n", sizeof(double));
	printf("구조체 struct Car 형의 크기는 %d바이트입니다.\n", sizeof(Car));
	printf("구조체 struct Car 형 포인터의 크기는 %d바이트입니다.\n", sizeof(Car *));

	return 0;

}