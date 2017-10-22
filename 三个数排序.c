#include<stdio.h>
int main(void)
{
	int num1, num2, num3,temp;
	printf("请输入三个整数：\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if (num1 >num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num1 > num3)
	{
		temp = num1;
		num1 = num3;
		num3 = temp;
	}
	if (num2 > num3)
	{
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	printf("排完序后的顺序为：%4d %4d %4d\n",num1,num2,num3);


	return 0;
}