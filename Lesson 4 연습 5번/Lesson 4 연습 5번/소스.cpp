#include<stdio.h>
int main(void)
{
	int num1, num2, num3, num4, num5;
	
	printf("과목 1의 점수를 입력하세요.\n");
	scanf("%d", &num1);

	printf("과목 2의 점수를 입력하세요.\n");
	scanf("%d", &num2);

	printf("과목 3의 점수를 입력하세요.\n");
	scanf("%d", &num3);

	printf("과목 4의 점수를 입력하세요.\n");
	scanf("%d", &num4);

	printf("과목 5의 점수를 입력하세요.\n");
	scanf("%d", &num5);

	printf("5 과목의 합계 점수는 %d입니다.\n",num1 + num2 + num3 + num4 + num5);
	printf("5 과목의 평균 점수는 %f입니다.\n", (double)(num1 + num2 + num3 + num4 + num5) / 5);



	return 0;

}