#include<stdio.h>
#include<math.h>
int main(void)
{
	float i;
	printf("请输入一个数：\n");
		scanf("%f",&i);
		printf("得到的结果为：\n%f\n",ceil(i));
		printf("得到的结果为：\n%f\n", floor(i));
		printf("得到的结果为：\n%f\n", round(i));
		// ceil(x)返回不小于x的最小整数（然后转换为double型）
		// floor(x) 返回不大于x的最大整数
		// round(x)  返回x的四舍五入的整数值；

	return 0;
}