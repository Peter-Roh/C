#include<stdio.h>

int main(void)
{
	char str[100];
	int i;
	int j = 0;

	printf("���ڿ��� �Է��ϼ���.\n");
	 scanf("%s", str);

	 for (i = 0; str[i] != '\0'; i++)
	 {
		 if (str[i] == 'a')
			 j++;
	 }

	 printf("%s �ȿ� a�� %d�� �ֽ��ϴ�.\n", str, j);
	
	 return 0;

}