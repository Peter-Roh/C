#include<stdio.h>

int main(void)

{

	int res;

	printf("������ �Է��ϼ���. (1~5)\n");
	scanf("%d", &res);

	while (res < 1 || res > 5)
	{
		printf("������ �ٽ� �Է��ϼ���. (1~5)\n");
		scanf("%d", &res);
	}

		switch (res)
		{

		case 1:
		case 2:
			printf("���� �� ����ϼ���.\n");
			break;
		case 3:
		case 4:
			printf("���߽��ϴ�.\n");
			break;
		case 5:
			printf("�ſ� ����մϴ�.\n");
			break;
		
		}

	return 0;

}