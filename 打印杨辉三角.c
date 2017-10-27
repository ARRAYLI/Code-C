//杨辉三角
#if 0
#include<stdio.h>
#define L 11
int main(void)
{
	int i, j, a[L][L];
	for (i = 1; i <L; i++)    //给杨辉三角每一行的第一个数和最后一个数赋值为1
	{
		a[i][1] = 1;
		a[i][i] = 1;
	}
	for (i = 3; i < L; i++)     //从第三行起每一行的第二列开始到倒数第二列；
		for (j = 2; j <= i - 1; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];   //第i行第j列的值等于第i-1行第j-1列的值加上第i-1行第j列的值；
	for (i = 1; i < L; i++)
	{
		for (j = 1; j <=i; j++)
			printf("%-4d",a[i][j]);
		printf("\n");

	}
	return 0;
}
#endif
//彩球问题
#if 0
#include<stdio.h>
int main(void)
{
	int i, j, k,count=0;
	printf("time red ball white ball black ball\n");
	for (i = 0; i <= 3; i++)
		for (j = 0; j <= 3; j++)
			for (k = 0; k <= 6;k++)
				if (i + j + k == 8)
				{
					count++;
					printf("%3d%5d%8d%11d\n", count, i, j, k);
				}
	return 0;
}
#endif

//计算10以内的数字的平方和
#if 0
#include<stdio.h>
#define L 10
int main(void)
{
	int i,sum=0;
	for (i = 1; i <= L; i++)
		sum += i*i;
	printf("sum=%d\n", sum);
	return 0;
}
#endif

//循环显示随机数
//#if 0
#include<stdio.h>
#include<stdlib.h>
#define L 10
int main(void)
{
	int i;
	for (i = 0; i < L; i++)
	{
		srand(i + 2);
		printf("第%d次产生的随机数是：%d\n", i + 1, rand());
	}
}
//#endif