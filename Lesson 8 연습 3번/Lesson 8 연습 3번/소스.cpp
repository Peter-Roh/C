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

	printf("1��° ������ �Է��ϼ���(1~5).\n");
	scanf("%d", &x);

	printf("2��° ������ �Է��ϼ���(1~5).\n");
	scanf("%d", &y);

	printf("%d�� %d������ %d�Դϴ�.\n", x, y, power(x, y));

	return 0;

}