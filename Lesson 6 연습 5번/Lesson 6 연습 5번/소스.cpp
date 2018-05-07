#include<stdio.h>
int main(void)
{
	int i, num;

	printf("2 이상의 정수를 입력하세요.\n");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			printf("%d는 소수가 아닙니다.\n", num);
			break;
		}
	}
	if (i == num)
		printf("%d는 소수입니다.\n", num);
	return 0;

}