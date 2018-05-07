#include<stdio.h>
#pragma warning(disable:4996)

/* avg 함수의 정의 */
double avg(int *pT)
{
	int i;
	double sum;

	sum = 0.0;

	for (i = 0; i < 5; i++)
		sum += *(pT + i);

	return sum / 5;

}

int main(void)
{
	int test[5];
	int i;
	double ans;

	printf("5명의 시험 점수를 입력하세요.\n");

	for (i = 0; i < 5; i++)
		scanf("%d", &test[i]);

	ans = avg(test);

	printf("5명의 평균은 %1f점입니다.\n", ans);

	return 0;

}