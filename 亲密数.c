#include<stdio.h>
int main(void)
{
	int i, j,k, sum1, sum2,count=0;  //�������Ϊ�������ͣ�
	for (i = 1; i < 10000; i++)   //��10000���ڵ���������٣�
	{
		sum1 = 0;
		sum2 = 0;
		for (j = 1; j < i; j++)
			if (i%j==0)    //�ж�j�Ƿ���i�����ӣ�
			     sum1 += j;  //������֮�ͣ�
		for (k = 1; k < i; k++)
			if (sum1%k == 0)     //�ж�k�Ƿ���sum1�����ӣ�
				sum2 += k;
		if (sum2==i&&sum1!=i&&i<sum1)
			printf("%d=>\t%d\n",i, sum1);   //�����������
	}
	printf("\n");
	return 0;
}