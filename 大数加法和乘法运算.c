#include<stdio.h>
#include<string.h>

//���㳬�����ļӷ����㣻
void Add(char s1[],char s2[],int len1,int len2,char sum[])
{
	int i, j;
    //�ȶ��������ݽ����жϣ��Ѵ�����ݷ���ǰ�棻
	for (i = len2 - 1,j=len2-1; i >= 0; i--,j--)
	{



	}




}
int main(void)
{
	char Data1[100],Data2[100],sum[100];   //Data1��ʾ��һ����������Data2��ʾ������������

	int len1 = 0, len2 = 0;   
	printf("�������һ����������\n");
	gets(Data1);
	printf("������ڶ�����������\n");
	gets(Data2);
	Add(Data1, Data2, len1, len2,sum);
	return 0;
}