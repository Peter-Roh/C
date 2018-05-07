#include<stdio.h>
#define NUM 5

int main(void)
{
	int test[NUM];
	int i;
	int j = 0;

	printf("시험 점수를 입력하세요.\n");

	for (i = 0; i < NUM; i++)
	{
		scanf("%d", &test[i]);

		if (test[i] >= 70)
			j++;

	}

	for (i = 0; i<NUM; i++)
		printf("%d번째 사람의 시험 점수는 %d점입니다.\n", i + 1, test[i]);

	printf("70점 이상인 학생은 %d명입니다.\n", j);

	return 0;

}