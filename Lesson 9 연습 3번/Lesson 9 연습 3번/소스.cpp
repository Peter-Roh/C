#include<stdio.h>
#pragma warning(disable:4996)

int add(int *px, int a)
{

	*px = *px + a;

	return (*px);
}

int main(void)
{
	int x, y, a;

	printf("�� ������ ������ �Է��ϼ���.\n");
	scanf("%d %d", &x, &y);

	printf("���� ������ �Է��ϼ���.\n");
	scanf("%d", &a);

	printf("%d���� ���߱� ������\n", a);

	printf("����1�� %d���� �ƽ��ϴ�.\n", add(&x, a));
	printf("����2�� %d���� �ƽ��ϴ�.\n", add(&y, a));

	return 0;

}
