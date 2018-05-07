#include<stdio.h>
int main(void)
{
	int num, sum;

	num = 1;
	sum = 0;


	printf("시험 점수를 입력하세요. (0이면 종료)\n");

	while (num)
	{
		scanf("%d", &num);
		sum += num;

	}

	printf("시험 점수의 합계는 %d입니다.\n", sum);

	return 0;

}