#include<stdio.h>
void Insort(int a[],int n)
{
	int i,j;
	for (i = 2; i <= n; i++)
	{
		a[0] = a[i];   //����a[0]�����ڣ�
		j = i - 1;     //ȷ���Ƚ�Ԫ������ߵ�Ԫ�أ�
		while (a[0] < a[j])
		{
			a[j + 1] = a[j];   //�������ƣ�
			j--;               //�������һ��δ�Ƚϵ�Ԫ�أ�
		}
		a[j + 1] = a[0];      //��ȷ����λ�ò���a[0];
	}
}
void shsort(int a[],int len)
{
	int i, j, d;
	d = len / 2;
	while (d>=1)
	{
		//ֱ�Ӳ�������
		for (i = d+1; i <= len; i++)    //�����±��d+1��ʼ����ֱ�Ӳ�������
		{
			a[0] = a[i];     //���ü����ڣ�
			j = i - d;       //ȷ��Ҫ�Ƚ�Ԫ�����ұߵ�λ�ã�
			while (a[0] < a[j])
			{
				a[j + d] = a[j];    //�������ƣ�
				j = j - d;;       //�������һ��Ϊ�Ƚϵ�����
			}
			a[j + d] = a[0];   //��ȷ����λ�ò���a[i];
		}
		d = d / 2;             //������Ϊԭ����һ�룻
	}
}
int main(void)
{
	int i,arr[11];
	printf("������10�����ݣ�\n");
	for (i = 1; i < 11; i++)
		scanf("%d",&arr[i]);
	//printf("��������˳��Ϊ��\n");
	shsort(arr,10);
	printf("��������˳��Ϊ��\n");
	for (i = 1; i < 11; i++)
		printf("%-4d",arr[i]);
	puts("");








	/*	
	20  19  18  17  16  15  14  13  12  11 
    10  9  8  7  6  5  4  3  2  1
	
	*/
	return 0;
}