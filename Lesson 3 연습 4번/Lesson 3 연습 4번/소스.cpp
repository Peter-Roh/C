#include <stdio.h>
int main(void)
{
	double a, b;

	printf("키를 입력하세요. \n");
	scanf("%lf", &a);
	printf("몸무게를 입력하세요. \n");
	scanf("%lf", &b);
	printf("키는 %f cm입니다. \n", a);
	printf("몸무게는 %f kg입니다. \n", b);

	return 0;
	
}