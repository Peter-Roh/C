#include<stdio.h>

int main(void)

{

	int num;
	int i = 1;

	printf("�� �� �ݺ��ұ��?\n");
	scanf("%d", &num);


	do
	{
		printf("%d��° �ݺ��մϴ�.\n", i);
		i++;
	} while (i <= num);

	printf("�ݺ��� ����Ǿ����ϴ�.\n");

	return 0;

}