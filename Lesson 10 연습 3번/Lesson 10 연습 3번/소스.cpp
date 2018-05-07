#include<stdio.h>
#pragma warning(disable : 4996)

int compare(char *str1, char *str2)
{

	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 1;
		}
		str1++;
		str2++;

	}

	return -1;

}

int main(void)
{
	char str1[100];
	char str2[100];
	int ans;

	printf("1번째 문자열을 입력하세요.\n");
	scanf("%s", &str1);

	printf("2번째 문자열을 입력하세요.\n");
	scanf("%s", &str2);

	ans = compare(str1, str2);

	if (ans == 1)
		printf("2개의 문자열은 같습니다.\n");
	else if (ans == -1)
		printf("2개의 문자열은 다릅니다.\n");

	return 0;

}