#include <stdio.h>

int main(void)
{
	int inum;
	double dnum;

	inum = 160;

	printf("키는 %d cm입니다.\n", inum);

	printf("double 형 변수에 대입합니다.\n");

	dnum = (double)inum;

	printf("키는 %f cm입니다.\n", dnum);

	return 0;

	
}