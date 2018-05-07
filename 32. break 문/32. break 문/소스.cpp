#include<stdio.h>

int main(void)
{

	int res;
	int i;

	printf("몇 번째 루프를 중지시킬까요? (1 ~ 10)\n");
	scanf("%d", &res);

	for (i = 1; i <= 10; i++)
	{
		printf("%d번째 처리 입니다.\n", i);

		if (i == res)
			break;

	}

	return 0;

}