#include<stdio.h>

int main(void)
{
	int test[][5] = {
		{80, 60, 22, 50}, {90, 55, 68, 72, 58}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d��° ����� ���������� %d���Դϴ�.\n", i + 1, test[0][i]);
		printf("%d��° ����� ��������� %d���Դϴ�.\n", i + 1, test[1][i]);
	
	}

	return 0;

}