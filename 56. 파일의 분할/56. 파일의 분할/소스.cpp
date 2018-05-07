#include<stdio.h>
#include "C:\Users\rmc2\Desktop\내 폴더\컴퓨터\프로그래밍\Solution\56-1 헤더\56.1 헤더\헤더.h"

int main(void)	
{
	int num1, num2, ans;

	printf("1번째 정수를 입력하세요.\n");
	scanf("%d", &num1);

	printf("2번째 정수를 입력하세요.\n");
	scanf("%d", &num2);

	ans = max(num1, num2);

	printf("최댓값은 %d입니다\n", ans);

	return 0;

}