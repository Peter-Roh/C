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
	int i, j;
	Person person[2];

	for (i = 0; i < 2; i++)
	{
		printf("���̸� �Է��ϼ���.\n");
		scanf("%d", &person[i].age);

		printf("�����Ը� �Է��ϼ���.\n");
		scanf("%lf", &person[i].weight);

		printf("Ű�� �Է��ϼ���.\n");
		scanf("%lf", &person[i].height);

	}

	for (j = 0; j < 2; j++)
	{
		printf("���� %d ������ %f Ű %f�Դϴ�.\n", person[j].age, person[j].weight, person[j].height);

	}
	
	return 0;

}