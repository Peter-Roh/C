#include<stdio.h>

int main(void)
{

	char res;

	printf("A~C������ ���ڸ� �Է��ϼ���.\n");
	scanf("%c", &res);

	if (res == 'A' || res == 'B' || res == 'C')
		printf("�����Դϴ�.\n");
	else
		printf("Ʋ�Ƚ��ϴ�.\n");

	return 0;

}