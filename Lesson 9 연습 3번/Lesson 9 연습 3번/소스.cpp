#include<stdio.h>
#pragma warning(disable:4996)

int add(int *px, int a)
{

	*px = *px + a;

	return (*px);
}

int main(void)
{
	int x, y, a;

	printf("두 과목의 점수를 입력하세요.\n");
	scanf("%d %d", &x, &y);

	printf("더할 점수를 입력하세요.\n");
	scanf("%d", &a);

	printf("%d점을 더했기 때문에\n", a);

	printf("과목1은 %d점이 됐습니다.\n", add(&x, a));
	printf("과목2는 %d점이 됐습니다.\n", add(&y, a));

	return 0;

}
