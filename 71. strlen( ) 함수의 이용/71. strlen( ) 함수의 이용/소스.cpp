#include<stdio.h>
#include<string.h>
#pragma warning(disable: 4996)

int main(void)
{
	char str[100];

	printf("���ڿ�(��������)�� �Է��ϼ���.\n");

	scanf("%s", str);

	printf("���ڿ� ���̴� %d�Դϴ�.\n", strlen(str));

	return 0;

}