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

	printf("문자열을 입력하세요.\n");
	scanf("%s", str);

	ans = length(str);

	printf("문자열의 길이는 %d입니다.\n", ans);

	return 0;

}