#include<stdio.h>

int square(int x)
{
	return x * x;

}

int main(void)
{
	int x;

	printf("정수를 입력하세요.\n");
	scanf("%d", &x);

	printf("%d의 제곱은 %d입니다.\n", x, square(x));

	return 0;

}