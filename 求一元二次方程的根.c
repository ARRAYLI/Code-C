#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, b, c;
	float x1, x2;
	printf("�������Ԫһ�η��̵�ϵ��a,b,c:\n");
	scanf("%d%d%d", &a, &b, &c);
	x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	if (x1 == x2)
		printf("�˷�����������ͬ�ĸ���%.2f\n",x1);
	else
	printf("�˶�Ԫһ�η��̵Ľ�Ϊ��%.2f\t%.2f\n",x1,x2);

	return 0;
}