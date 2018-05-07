#include<stdio.h>

int main(void)
{

	char str[] = "Hello";
	int i = 0;

	printf("Hello\n");

	while (str[i])
	{
		printf("%c*", str[i]);
		i++;
	}

	printf("\n");

	return 0;

}