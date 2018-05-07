#include<stdio.h>
#pragma warning(disable : 4996)

typedef struct Car
{
	int num;
	double gas;

} Car;

void show(Car *pC);

int main(void)
{
	Car car1 = { 0, 0.0 };
	
	printf("번호를 입력하세요.\n");
	scanf("%d", &car1.num);

	printf("연료량을 입력하세요.\n");
	scanf("%lf", &car1.gas);

	show(&car1);

	return 0;

}

void show(Car *pC)
{
	printf("자동차 번호는 %d : 연료량은 %f입니다.\n", pC->num, pC->gas);

}