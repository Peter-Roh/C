#include<stdio.h>

int main(void)
{
	char str[50];
	int i = 0;
	int j = 0;

	printf("���ڿ��� �Է��ϼ���.\n");
	scanf("%s", str);

	while (str[i] != '\0')
	{
		i++;
		j++;
	}

	printf("���ڿ� ũ��� %d�Դϴ�.\n", j);

	return 0;

}