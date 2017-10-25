#include<stdio.h>
void gcd1(int a,int b)
{
	int i,c,t=0,m=0;
	if (a<b)    //如果a小于b的话实现两值互换；
	{
		t = a;
		a = b;
		b = t;
	}
	//for (i = 1;i<)
	m = a*b;
	c = a%b;
	while (c!=0)
	{
		a = b;
		b = c;
		c = a%b;
	}
	printf("%d和%d的最大公约数是：%d\n",a,b,b);
	printf("%d和%d的最小公倍数是：%d\n", a, b, m/b);


	//return;
}
int gcd(int a, int b)
{
	int c=0,t=0;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	c = a%b;
	while (c!=0)
	{
		a = b;
		b = c;
		c = a%b;
	}
	return b;
}
int lcm(int a, int b)
{
	int m = 0,d=0;
	m = a*b;
	d=gcd(a,b);
	m = m / d;
	return m;
}
int main(void)
{
	int num1, num2,a=0,b=0;
	printf("请输入两个整数a和b:\n");
	scanf("%d%d",&num1,&num2);
    printf("最大公约数为：%d\n",gcd(num1, num2));
	printf("最大小公倍数为：%d\n", lcm(num1, num2));
	return 0;
}