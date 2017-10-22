#include<stdio.h>
#include<math.h>
int main(void)
{
	float side1, side2, side3;
	float s, area;
	printf("请输入三角形的三条边a,b,c:\n");
	scanf("%f%f%f",&side1,&side2,&side3);
	if (side1 + side2 > side3&&side1 + side3 > side2&&side2 + side3 > side1)
	{
		if (side1 == side2 == side3)
			printf("该三角形是等边三角形：\n");
		else if (side1==side2||side2==side3||side1==side3)
			printf("该三角形是等腰三角形：\n");
		else if (side1*side1 + side2*side2 == side3*side3 || side1*side1 + side3*side3 == side2*side2 || side3*side3 + side2*side2 == side1*side1)
			printf("该三角形是直角三角形：\n");
		else if (side1*side1 + side2*side2 <side3*side3 || side1*side1 + side3*side3<side2*side2 || side2*side2 + side3*side3<side1*side1)
			printf("该三角形是钝角三角形：\n");
		else if (side1*side1 + side2*side2 >side3*side3 || side1*side1 + side3*side3>side2*side2 || side2*side2 + side3*side3>side1*side1)
			printf("该三角形是锐角三角形：\n");
		s = (side1 + side2 + side3) / 2;
		area = (float)sqrt(s*(s - side1)*(s - side2)*(s - side3));
		printf("%.2f %.2f  %.2f  构成的三角形的面积为：%.2f\n",side1,side2,side3,area);
	}
	else
		printf("这三条边不能构成三角形：\n");
	

	return 0;
}