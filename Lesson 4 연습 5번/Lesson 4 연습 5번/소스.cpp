#include<stdio.h>
int main(void)
{
	int num1, num2, num3, num4, num5;
	
	printf("���� 1�� ������ �Է��ϼ���.\n");
	scanf("%d", &num1);

	printf("���� 2�� ������ �Է��ϼ���.\n");
	scanf("%d", &num2);

	printf("���� 3�� ������ �Է��ϼ���.\n");
	scanf("%d", &num3);

	printf("���� 4�� ������ �Է��ϼ���.\n");
	scanf("%d", &num4);

	printf("���� 5�� ������ �Է��ϼ���.\n");
	scanf("%d", &num5);

	printf("5 ������ �հ� ������ %d�Դϴ�.\n",num1 + num2 + num3 + num4 + num5);
	printf("5 ������ ��� ������ %f�Դϴ�.\n", (double)(num1 + num2 + num3 + num4 + num5) / 5);



	return 0;

}