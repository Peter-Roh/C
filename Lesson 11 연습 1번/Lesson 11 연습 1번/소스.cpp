#include<stdio.h>
#pragma warning(disable: 4996)

typedef struct Person
{
	int age;
	double weight;
	double height;

} Person;

int main(void)
{
	Person person1, person2;

	printf("���̸� �Է��ϼ���.\n");
	scanf("%d", &person1.age);

	printf("�����Ը� �Է��ϼ���.\n");
	scanf("%lf", &person1.weight);

	printf("Ű�� �Է��ϼ���.\n");
	scanf("%lf", &person1.height);

	printf("���̸� �Է��ϼ���.\n");
	scanf("%d", &person2.age);

	printf("�����Ը� �Է��ϼ���.\n");
	scanf("%lf", &person2.weight);

	printf("Ű�� �Է��ϼ���.\n");
	scanf("%lf", &person2.height);

	printf("���� %d ������ %f Ű %f�Դϴ�.\n", person1.age, person1.weight, person1.height);
	printf("���� %d ������ %f Ű %f�Դϴ�.\n", person2.age, person2.weight, person2.height);

	return 0;

}