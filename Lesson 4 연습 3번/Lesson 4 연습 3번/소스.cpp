#include<stdio.h>

int main(void)
{
	int h, l;

	double s;
	
	
	printf("�ﰢ���� ���̸� �Է��ϼ���.\n");
	scanf("%d", &h);

	printf("�ﰢ���� �غ��� ���̸� �Է��ϼ���\n");
	scanf("%d", &l);

	s = (double)h*l / 2;

	printf("�ﰢ���� ���̴� %f�Դϴ�. \n", s);

	return 0;

}