#include<stdio.h>

/* min �Լ��� ����*/

int min(int x, int y)
{
	if (x >= y)
		return y;
	else
		return x;

}

int main(void)
{
	int x, y;
	
	printf("1��° ������ �Է��ϼ���.\n");
	scanf("%d", &x);

	printf("2��° ������ �Է��ϼ���.\n");
	scanf("%d", &y);

	
	printf("�ּڰ��� %d�Դϴ�.\n", min(x, y));

	return 0;

}