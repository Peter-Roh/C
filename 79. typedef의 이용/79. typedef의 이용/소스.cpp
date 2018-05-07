#include <stdio.h>
#pragma warning(disable : 4996)

typedef struct Car
{
	int num;
	double gas;

} Car;

int main(void)
{
	Car car1;
	
	car1.num = 1234;
	car1.gas = 25.5;

	printf("자동차 번호는 %d : 연료량은 %f입니다.\n", car1.num, car1.gas);

	return 0;

}