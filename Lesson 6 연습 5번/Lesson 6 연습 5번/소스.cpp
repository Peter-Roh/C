#include<stdio.h>
int main(void)
{
	int i, num;

	printf("2 �̻��� ������ �Է��ϼ���.\n");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			printf("%d�� �Ҽ��� �ƴմϴ�.\n", num);
			break;
		}
	}
	if (i == num)
		printf("%d�� �Ҽ��Դϴ�.\n", num);
	return 0;

}