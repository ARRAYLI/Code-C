#include<stdio.h>
int main(void)
{
	int i, j,k,n=0;
	int num,a[16] = {0};
	printf("请输入一个十进制数：\n");
	scanf("%d",&num);
	for (k = 0; k < 15; k++)
	{
		i = num % 2;
		j = num / 2; 
        num = j;
	     	a[k] = i;
	}

	for (k = 15; k >= 0; k--)
	{
		printf("%-d",a[k]);
		n++;
		if (n % 4 == 0)
			printf(" ");
	}
	puts("");
	return 0;
}