#include<stdio.h>

int main(void)
{

	int num;

	printf("성적을 입력하세요.\n");
	scanf("%d", &num);

	if (num == 1)
		printf("성적은 1입니다. 노력이 필요합니다.\n");
	else if (num == 2)
		printf("성적은 2입니다. 조금 더 노력하세요.\n");
	else if (num == 3)
		printf("성적은 3입니다. 잘 했습니다.\n");
	else if (num == 4)
		printf("성적은 4입니다. 매우 잘 했습니다.\n");
	else if (num == 5)
		printf("성적은 5입니다. 매우 우수합니다.\n");

}