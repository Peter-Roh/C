#include<stdio.h>
#pragma warning(disable : 4996)

typedef struct Car
{
	int num;
	double gas;

} Car;

int main(void)
{
	Car car1 = { 1234, 25.5 };
	Car car2 = { 4567, 52.2 };

	printf("car1의 자동차 번호는 %d : 연료량은 %f입니다.\n", car1.num, car1.gas);
	printf("car2의 자동차 번호는 %d : 연료량은 %f입니다.\n", car2.num, car2.gas);

	car2 = car1;

	printf("car1을 car2에 대입했습니다.\n");

	printf("car2의 번호는 %d : 연료량은 %f가 되었습니다.\n", car2.num, car2.gas);

	return 0;

}