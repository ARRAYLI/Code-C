#include<stdio.h>
int main(void)
{
	int i, j,k, sum1, sum2,count=0;  //定义变量为基本类型；
	for (i = 1; i < 10000; i++)   //对10000以内的数进行穷举；
	{
		sum1 = 0;
		sum2 = 0;
		for (j = 1; j < i; j++)
			if (i%j==0)    //判断j是否是i的因子；
			     sum1 += j;  //求因子之和；
		for (k = 1; k < i; k++)
			if (sum1%k == 0)     //判断k是否是sum1的因子；
				sum2 += k;
		if (sum2==i&&sum1!=i&&i<sum1)
			printf("%d=>\t%d\n",i, sum1);   //输出亲密数；
	}
	printf("\n");
	return 0;
}