#include <stdio.h>
int main(void)
{
	char ab;

	printf("알파벳의 첫 문자는 무엇입니까? \n");

	ab = getchar();

	printf("알파벳의 첫 문자는 %c입니다. \n", ab);

	return 0;

}