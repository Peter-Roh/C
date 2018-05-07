#include<stdio.h>

int main(void)
{

	int num;

	printf("0부터 10까지의 정수를 입력하세요.\n");
	scanf("%d", &num);

	if (0 <= num && num <= 10)
		printf("정답입니다.\n");
	else
		printf("틀렸습니다.\n");

	return 0;

}