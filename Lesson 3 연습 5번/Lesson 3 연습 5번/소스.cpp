#include <stdio.h>
int main(void)
{
	double a, b;

	printf("키와 몸무게를 입력하세요. \n");

	scanf("%lf", &a);
	scanf("%lf", &b);

	printf("키는 %f cm , 몸무게는 %f kg입니다. \n", a, b);


	return 0;

}