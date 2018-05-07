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

	printf("나이를 입력하세요.\n");
	scanf("%d", &person.age);

	printf("몸무게를 입력하세요.\n");
	scanf("%lf", &person.weight);

	printf("키를 입력하세요.\n");
	scanf("%lf", &person.height);

	printf("나이 %d 몸무게 %f 키 %f입니다.\n", person.age, person.weight, person.height);

	aging(&person);

	printf("1년이 경과했습니다.\n");

	printf("나이 %d 몸무게 %f 키 %f입니다.\n", person.age, person.weight, person.height);

		return 0;

}

void aging(Person *p)
{
	p->age++;

}