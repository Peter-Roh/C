#include<stdio.h>
#define NUM 5

int main(void)
{
	int test[NUM];
	int i;
	int j = 0;

	printf("���� ������ �Է��ϼ���.\n");

	for (i = 0; i < NUM; i++)
	{
		scanf("%d", &test[i]);

		if (test[i] >= 70)
			j++;

	}

	for (i = 0; i<NUM; i++)
		printf("%d��° ����� ���� ������ %d���Դϴ�.\n", i + 1, test[i]);

	printf("70�� �̻��� �л��� %d���Դϴ�.\n", j);

	return 0;

}