#include<stdio.h>

int main(void)
{
	int test[][5] = {
		{80, 60, 22, 50}, {90, 55, 68, 72, 58}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d번째 사람의 국어점수는 %d점입니다.\n", i + 1, test[0][i]);
		printf("%d번째 사람의 산수점수는 %d점입니다.\n", i + 1, test[1][i]);
	
	}

	return 0;

}