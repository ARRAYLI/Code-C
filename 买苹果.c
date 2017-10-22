#include<stdio.h>
int main(void)
{
	int sum=2;
	int day = 0;
	float cost=0;
	while (sum<100)
	{	
		cost+=0.8*sum;
		day = day + 1;
		sum = 2 * sum;   //判断是否买到苹果个数是否超过100个；
	}
	printf("每天买苹果的平均花费是：%.2f\n",cost/day);
	return 0;
}