#include<stdio.h>

int main(void)
{

	int num;

	printf("0���� 10������ ������ �Է��ϼ���.\n");
	scanf("%d", &num);

	if (0 <= num && num <= 10)
		printf("�����Դϴ�.\n");
	else
		printf("Ʋ�Ƚ��ϴ�.\n");

	return 0;

}