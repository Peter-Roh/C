#include<stdio.h>
#define NUM 5

int main(void)
{
	int test[NUM];
	int i;
	int big = 0;

	printf("���� ������ �Է��ϼ���.\n");

	for (i = 0; i < NUM; i++)
	{
		scanf("%d", &test[i]);

		if (big < test[i])
			big = test[i];
	}

	for (i=0; i<NUM; i++)
		printf("%d��° ����� ���� ������ %d���Դϴ�.\n", i + 1, test[i]);

	printf("�ְ� ������ %d���Դϴ�.\n", big);
	
	return 0;

}