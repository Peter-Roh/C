#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int length(char *str)
{
	int c = 0;

	while (*str)
	{
		c++;
		str++;

	}
	
	return c;

}

int main(void)
{
	char str[100];
	int ans;

	printf("���ڿ��� �Է��ϼ���.\n");
	scanf("%s", str);

	ans = length(str);

	printf("���ڿ��� ���̴� %d�Դϴ�.\n", ans);

	return 0;

}