#include<stdio.h>
int main(void)
{
	char ch,ch1;
	printf("������һ��Сд��ĸ��\n");
	ch=getchar();
	ch = ch - 32;
	printf("%c\n",ch);
	printf("%d\n",ch);
//	getchar();
//	ch1 = getchar();
//	printf("%d\n",ch1-0);
	return 0;
}