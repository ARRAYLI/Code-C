#include<stdio.h>
int main(void)
{
	int x;
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	if (x % 5 == 0 && x % 7 == 0)
		printf("YES!\n");
	else
		printf("NO!\n");
	return 0;
}