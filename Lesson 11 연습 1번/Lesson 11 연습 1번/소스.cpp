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

	printf("나이를 입력하세요.\n");
	scanf("%d", &person1.age);

	printf("몸무게를 입력하세요.\n");
	scanf("%lf", &person1.weight);

	printf("키를 입력하세요.\n");
	scanf("%lf", &person1.height);

	printf("나이를 입력하세요.\n");
	scanf("%d", &person2.age);

	printf("몸무게를 입력하세요.\n");
	scanf("%lf", &person2.weight);

	printf("키를 입력하세요.\n");
	scanf("%lf", &person2.height);

	printf("나이 %d 몸무게 %f 키 %f입니다.\n", person1.age, person1.weight, person1.height);
	printf("나이 %d 몸무게 %f 키 %f입니다.\n", person2.age, person2.weight, person2.height);

	return 0;

}