#include <stdio.h>

int main(void)
{
	printf("1+2 equals %d. \n", 1 + 2);
	printf("3X4 equals %d. \n", 3 * 4);

	int num1 = 2;
	int num2 = 3;

	int sum = num1 + num2;

	printf("���� num1�� ���� %d�Դϴ�. \n", num1);
	printf("���� num2�� ���� %d�Դϴ�. \n", num2);

	printf("num1 + num2�� ���� %d�Դϴ�. \n", sum);

	num1 = num1 + 1;

	printf("���� num1�� ���� 1�� ���ϸ� %d�Դϴ�. \n", num1);


	return 0;

}