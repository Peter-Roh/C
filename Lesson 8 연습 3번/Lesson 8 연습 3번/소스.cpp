#include<stdio.h>

int power(int x, int y)
{
	int i;
	int N = 1;

	for (i = 0; i < y; i++)
	{
		N = N*x;

	}

	return N;

}

int main(void)
{
	int x, y;

	printf("1번째 정수를 입력하세요(1~5).\n");
	scanf("%d", &x);

	printf("2번째 정수를 입력하세요(1~5).\n");
	scanf("%d", &y);

	printf("%d의 %d제곱은 %d입니다.\n", x, y, power(x, y));

	return 0;

}