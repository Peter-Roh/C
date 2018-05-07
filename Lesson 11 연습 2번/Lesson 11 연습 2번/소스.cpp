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
		printf("나이를 입력하세요.\n");
		scanf("%d", &person[i].age);

		printf("몸무게를 입력하세요.\n");
		scanf("%lf", &person[i].weight);

		printf("키를 입력하세요.\n");
		scanf("%lf", &person[i].height);

	}

	for (j = 0; j < 2; j++)
	{
		printf("나이 %d 몸무게 %f 키 %f입니다.\n", person[j].age, person[j].weight, person[j].height);

	}
	
	return 0;

}