#include<stdio.h>
int main(void)
{
	int a;
	printf("请输入一个整型数：\n");
	scanf("%d",&a);
		if (a % 2 == 0)
			printf("%d  是偶数\n",a);
		else
			printf("%d  是奇数\n",a);
	return 0;
}