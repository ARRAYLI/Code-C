//�������
#if 0
#include<stdio.h>
#define L 11
int main(void)
{
	int i, j, a[L][L];
	for (i = 1; i <L; i++)    //���������ÿһ�еĵ�һ���������һ������ֵΪ1
	{
		a[i][1] = 1;
		a[i][i] = 1;
	}
	for (i = 3; i < L; i++)     //�ӵ�������ÿһ�еĵڶ��п�ʼ�������ڶ��У�
		for (j = 2; j <= i - 1; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];   //��i�е�j�е�ֵ���ڵ�i-1�е�j-1�е�ֵ���ϵ�i-1�е�j�е�ֵ��
	for (i = 1; i < L; i++)
	{
		for (j = 1; j <=i; j++)
			printf("%-4d",a[i][j]);
		printf("\n");

	}
	return 0;
}
#endif
//��������
#if 0
#include<stdio.h>
int main(void)
{
	int i, j, k,count=0;
	printf("time red ball white ball black ball\n");
	for (i = 0; i <= 3; i++)
		for (j = 0; j <= 3; j++)
			for (k = 0; k <= 6;k++)
				if (i + j + k == 8)
				{
					count++;
					printf("%3d%5d%8d%11d\n", count, i, j, k);
				}
	return 0;
}
#endif

//����10���ڵ����ֵ�ƽ����
#if 0
#include<stdio.h>
#define L 10
int main(void)
{
	int i,sum=0;
	for (i = 1; i <= L; i++)
		sum += i*i;
	printf("sum=%d\n", sum);
	return 0;
}
#endif

//ѭ����ʾ�����
//#if 0
#include<stdio.h>
#include<stdlib.h>
#define L 10
int main(void)
{
	int i;
	for (i = 0; i < L; i++)
	{
		srand(i + 2);
		printf("��%d�β�����������ǣ�%d\n", i + 1, rand());
	}
}
//#endif