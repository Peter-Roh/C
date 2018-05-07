#include<stdio.h>

int main(void)
{
	char str[100];
	int i;
	int j = 0;

	printf("문자열을 입력하세요.\n");
	 scanf("%s", str);

	 for (i = 0; str[i] != '\0'; i++)
	 {
		 if (str[i] == 'a')
			 j++;
	 }

	 printf("%s 안에 a는 %d개 있습니다.\n", str, j);
	
	 return 0;

}