#include<stdio.h>

int main(void)
{
	char str[50];
	int i = 0;
	int j = 0;

	printf("문자열을 입력하세요.\n");
	scanf("%s", str);

	while (str[i] != '\0')
	{
		i++;
		j++;
	}

	printf("문자열 크기는 %d입니다.\n", j);

	return 0;

}