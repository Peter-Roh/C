#include<stdio.h>

int square(int x)
{
	return x * x;

}

int main(void)
{
	int x;

	printf("������ �Է��ϼ���.\n");
	scanf("%d", &x);

	printf("%d�� ������ %d�Դϴ�.\n", x, square(x));

	return 0;

}