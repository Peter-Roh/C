#include<stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하세요.\n");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("%d는 짝수입니다.\n", num);
	else
		printf("%d은 홀수입니다.\n", num);

	return 0;

}