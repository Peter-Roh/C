#include<stdio.h>

int main(void)
{
	int num1, num2;

	printf("두 개의 정수를 입력하세요.\n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	if (num1 == num2)
		printf("두 수의 값은 같은 값입니다.\n");
	else if (num1 < num2)
		printf("%d보다 %d이 큰 값입니다.\n", num1, num2);
	else
		printf("%d보다 %d이 큰 값입니다.\n", num2, num1);

	return 0;

}