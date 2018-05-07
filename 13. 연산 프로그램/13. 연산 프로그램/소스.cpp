#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("정수 1을 입력하세요\n");

	scanf("%d", &num1);

	printf("정수 2을 입력하세요\n");

	scanf("%d", &num2);

	printf("정수 1과 정수 2에 여러 가지 연산을 실행합니다.\n");

	printf("num1 + num2는 %d입니다.\n", num1 + num2);
	printf("num1 - num2는 %d입니다.\n", num1 - num2);
	printf("num1 X num2는 %d입니다.\n", num1 * num2);
	printf("num1 / num2는 %d입니다.\n", num1 / num2);

	return 0;

}