#include<stdio.h>
int main(void)
{
	int n;   //��n��ѧ����
	float sum1, sum2;   //sun1,sum2Ϊ�������ͣ�����������׼ȷ��
	for (n = 11;; n++)
	{
		sum1 = (n + 9) / 10.0;
		sum2 = (n * 9 + 171) / 100.0;
		//sum1��sum2ӦΪ�����������������ѭ����������һ���жϣ�
		if (sum1!=(int)sum1)   continue;    
		if (sum2 != (int)sum2)   continue;
		if (sum1 == sum2)  break;   //��sum1����sum2 ʱ����ѭ����
	}
	printf("����%d��ѧ��\n���ǹ��ֳ���%d��",(int)(n/sum1),n);
	printf("\n");
	return 0;
}
