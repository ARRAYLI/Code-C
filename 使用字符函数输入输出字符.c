#include<stdio.h>
int main(void)
{
	char a, b, c;
	printf("输入一个字符用getche接收：\n");
	a = getche();
	printf("\n");
	printf("输入一个字符用getch接收：\n");
	b = getch();
	printf("\n");
	printf("输入一个字符用getchar接收：\n");
	c = getchar();
	printf("\n");
	printf("输入的三个字符是：\n%c%c%c\n",a,b,c);

	return 0;
}