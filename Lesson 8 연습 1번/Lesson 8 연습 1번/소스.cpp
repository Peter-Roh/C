#include<stdio.h>

/* min 함수의 정의*/

int min(int x, int y)
{
	if (x >= y)
		return y;
	else
		return x;

}

int main(void)
{
	int x, y;
	
	printf("1번째 정수를 입력하세요.\n");
	scanf("%d", &x);

	printf("2번째 정수를 입력하세요.\n");
	scanf("%d", &y);

	
	printf("최솟값은 %d입니다.\n", min(x, y));

	return 0;

}