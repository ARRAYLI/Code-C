#include<stdio.h>
#include<string.h>

//计算超大数的加法运算；
void Add(char s1[],char s2[],int len1,int len2,char sum[])
{
	int i, j;
    //先对两个数据进行判断，把大的数据放在前面；
	for (i = len2 - 1,j=len2-1; i >= 0; i--,j--)
	{



	}




}
int main(void)
{
	char Data1[100],Data2[100],sum[100];   //Data1表示第一个超大数，Data2表示二个超大数；

	int len1 = 0, len2 = 0;   
	printf("请输入第一个超大数：\n");
	gets(Data1);
	printf("请输入第二个超大数：\n");
	gets(Data2);
	Add(Data1, Data2, len1, len2,sum);
	return 0;
}