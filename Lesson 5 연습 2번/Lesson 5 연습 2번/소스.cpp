#include<stdio.h>

int main(void)
{
	int num1, num2;

	printf("�� ���� ������ �Է��ϼ���.\n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	if (num1 == num2)
		printf("�� ���� ���� ���� ���Դϴ�.\n");
	else if (num1 < num2)
		printf("%d���� %d�� ū ���Դϴ�.\n", num1, num2);
	else
		printf("%d���� %d�� ū ���Դϴ�.\n", num2, num1);

	return 0;

}