#include<stdio.h>
#pragma warning(disable : 4996)

typedef struct Person
{
	int age;
	double weight;
	double height;

} Person;

void aging(Person *p);

int main(void)
{
	Person person;

	printf("���̸� �Է��ϼ���.\n");
	scanf("%d", &person.age);

	printf("�����Ը� �Է��ϼ���.\n");
	scanf("%lf", &person.weight);

	printf("Ű�� �Է��ϼ���.\n");
	scanf("%lf", &person.height);

	printf("���� %d ������ %f Ű %f�Դϴ�.\n", person.age, person.weight, person.height);

	aging(&person);

	printf("1���� ����߽��ϴ�.\n");

	printf("���� %d ������ %f Ű %f�Դϴ�.\n", person.age, person.weight, person.height);

		return 0;

}

void aging(Person *p)
{
	p->age++;

}