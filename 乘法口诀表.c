#include<stdio.h>
int main(void)
{
	int i, j;
	printf("-----------------------------------------------九九乘法表----------------------------------------------\n");
	for (i = 1; i <= 9; i++)   //控制行数；
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%d\t", j, i, i*j);
		printf("\n");
	}
	printf("-----------------------------------------------九九乘法表----------------------------------------------\n");
	return 0;
}