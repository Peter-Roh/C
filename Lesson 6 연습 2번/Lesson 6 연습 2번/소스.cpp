#include<stdio.h>
int main(void)
{
	int num, sum;

	num = 1;
	sum = 0;


	printf("���� ������ �Է��ϼ���. (0�̸� ����)\n");

	while (num)
	{
		scanf("%d", &num);
		sum += num;

	}

	printf("���� ������ �հ�� %d�Դϴ�.\n", sum);

	return 0;

}