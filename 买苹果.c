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
		sum = 2 * sum;   //�ж��Ƿ���ƻ�������Ƿ񳬹�100����
	}
	printf("ÿ����ƻ����ƽ�������ǣ�%.2f\n",cost/day);
	return 0;
}