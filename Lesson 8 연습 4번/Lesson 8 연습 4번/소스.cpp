#include<stdio.h>
#define SQUARE(x, y) (x*x)

int main(void)
{
	int x;

	printf("������ �Է��ϼ���.\n");
	scanf("%d", &x);

	printf("%d�� ������ %d�Դϴ�.\n", x, SQUARE(x));

	return 0;

}