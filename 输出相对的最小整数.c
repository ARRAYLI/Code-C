#include<stdio.h>
#include<math.h>
int main(void)
{
	float i;
	printf("������һ������\n");
		scanf("%f",&i);
		printf("�õ��Ľ��Ϊ��\n%f\n",ceil(i));
		printf("�õ��Ľ��Ϊ��\n%f\n", floor(i));
		printf("�õ��Ľ��Ϊ��\n%f\n", round(i));
		// ceil(x)���ز�С��x����С������Ȼ��ת��Ϊdouble�ͣ�
		// floor(x) ���ز�����x���������
		// round(x)  ����x���������������ֵ��

	return 0;
}