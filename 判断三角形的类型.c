#include<stdio.h>
#include<math.h>
int main(void)
{
	float side1, side2, side3;
	float s, area;
	printf("�����������ε�������a,b,c:\n");
	scanf("%f%f%f",&side1,&side2,&side3);
	if (side1 + side2 > side3&&side1 + side3 > side2&&side2 + side3 > side1)
	{
		if (side1 == side2 == side3)
			printf("���������ǵȱ������Σ�\n");
		else if (side1==side2||side2==side3||side1==side3)
			printf("���������ǵ��������Σ�\n");
		else if (side1*side1 + side2*side2 == side3*side3 || side1*side1 + side3*side3 == side2*side2 || side3*side3 + side2*side2 == side1*side1)
			printf("����������ֱ�������Σ�\n");
		else if (side1*side1 + side2*side2 <side3*side3 || side1*side1 + side3*side3<side2*side2 || side2*side2 + side3*side3<side1*side1)
			printf("���������Ƕ۽������Σ�\n");
		else if (side1*side1 + side2*side2 >side3*side3 || side1*side1 + side3*side3>side2*side2 || side2*side2 + side3*side3>side1*side1)
			printf("������������������Σ�\n");
		s = (side1 + side2 + side3) / 2;
		area = (float)sqrt(s*(s - side1)*(s - side2)*(s - side3));
		printf("%.2f %.2f  %.2f  ���ɵ������ε����Ϊ��%.2f\n",side1,side2,side3,area);
	}
	else
		printf("�������߲��ܹ��������Σ�\n");
	

	return 0;
}