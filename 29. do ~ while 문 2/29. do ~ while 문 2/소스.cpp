#include<stdio.h>

int main(void)

{

	int num;
	int i = 1;

	printf("몇 번 반복할까요?\n");
	scanf("%d", &num);


	do
	{
		printf("%d번째 반복합니다.\n", i);
		i++;
	} while (i <= num);

	printf("반복이 종료되었습니다.\n");

	return 0;

}