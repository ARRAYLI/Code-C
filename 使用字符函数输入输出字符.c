#include<stdio.h>
int main(void)
{
	char a, b, c;
	printf("����һ���ַ���getche���գ�\n");
	a = getche();
	printf("\n");
	printf("����һ���ַ���getch���գ�\n");
	b = getch();
	printf("\n");
	printf("����һ���ַ���getchar���գ�\n");
	c = getchar();
	printf("\n");
	printf("����������ַ��ǣ�\n%c%c%c\n",a,b,c);

	return 0;
}