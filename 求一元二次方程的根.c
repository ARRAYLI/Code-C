#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, b, c;
	float x1, x2;
	printf("请输入二元一次方程的系数a,b,c:\n");
	scanf("%d%d%d", &a, &b, &c);
	x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	if (x1 == x2)
		printf("此方程有两个相同的跟：%.2f\n",x1);
	else
	printf("此二元一次方程的解为：%.2f\t%.2f\n",x1,x2);

	return 0;
}