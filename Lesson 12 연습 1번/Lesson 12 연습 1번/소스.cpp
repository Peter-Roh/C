#include<stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%3d", j*i);

		}
		printf("\n");
	}

	return 0;

}