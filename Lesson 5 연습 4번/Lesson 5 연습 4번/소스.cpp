#include<stdio.h>

int main(void)
{

	char res;

	printf("A~C까지의 문자를 입력하세요.\n");
	scanf("%c", &res);

	if (res == 'A' || res == 'B' || res == 'C')
		printf("정답입니다.\n");
	else
		printf("틀렸습니다.\n");

	return 0;

}