#include<stdio.h>
#pragma warning(disable : 4996)

typedef struct Car
{
	int num;
	double gas;

} Car;

void show(Car c);

int main(void)
{
	Car car1 = { 0, 0.0 };

	printf("��ȣ�� �Է��ϼ���.\n");
	scanf("%d", &car1.num);

	printf("���ᷮ�� �Է��ϼ���\n");
	scanf("%lf", &car1.gas);

	show(car1);

	return 0;

}

void show(Car c)
{
	printf("�ڵ��� ��ȣ�� %d : ���ᷮ�� %f�Դϴ�.\n", c.num, c.gas);

}