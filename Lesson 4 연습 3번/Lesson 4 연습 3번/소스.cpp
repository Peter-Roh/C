#include<stdio.h>

int main(void)
{
	int h, l;

	double s;
	
	
	printf("삼각형의 높이를 입력하세요.\n");
	scanf("%d", &h);

	printf("삼각형의 밑변의 길이를 입력하세요\n");
	scanf("%d", &l);

	s = (double)h*l / 2;

	printf("삼각형의 넓이는 %f입니다. \n", s);

	return 0;

}