#include<stdio.h>
int main(void)
{
	int n;   //有n个学生；
	float sum1, sum2;   //sun1,sum2为单精度型，否则结果将不准确；
	for (n = 11;; n++)
	{
		sum1 = (n + 9) / 10.0;
		sum2 = (n * 9 + 171) / 100.0;
		//sum1和sum2应为整数，否则结束本次循环，继续下一次判断；
		if (sum1!=(int)sum1)   continue;    
		if (sum2 != (int)sum2)   continue;
		if (sum1 == sum2)  break;   //当sum1等于sum2 时跳出循环；
	}
	printf("共有%d个学生\n将糖果分成了%d份",(int)(n/sum1),n);
	printf("\n");
	return 0;
}
