#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int main(void)
{
	char str1[100];
	char str2[100];

	printf("1��° ���ڿ��� �Է��ϼ���.\n");
	scanf("%s", str1);

	printf("2��° ���ڿ��� �Է��ϼ���.\n");
	scanf("%s", str2);

	if (strcmp(str1, str2) == 0)
		printf("2���� ���ڿ��� �����ϴ�.\n");
	else
		printf("2���� ���ڿ��� �ٸ��ϴ�.\n");

	return 0;

}