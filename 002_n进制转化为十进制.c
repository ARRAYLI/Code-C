//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	long t1;     //用来计算做后的十进制数；
//	int i, n,t,  len;
//	char a[100];
//	printf("请输入数字：\n");
//	gets(a);     //把n进制数存到数组a中；
//	strupr(a);   //把数组中的小写字母转换为大写字母；
//	len = strlen(a);   //求出数组a的长度；
//	t1 = 0;
//	printf("请输入数字，即进制数2--8--16：\n");
//	scanf("%d", &n);             //输入是几进制数；
//	for (i = 0; i < len; i++)
//	{
//		if (a[i] - '0' >= n&&a[i]<'A'|| a[i] - 'A' + 10 >= n)   //判断输入的数据与进制数相同；
//		{
//			printf("输入有误！！\n");
//			exit(0);
//		}
//		if (a[i] >= '0'&&a[i] <= '9')   //判断是否位数字；
//			t = a[i] - '0';             //求出该数字赋给t；
//		else if (n >= 11 && (a[i] >= 'A'&&a[i] <= 'A' + n - 10))    //判断是否为字母；
//			t = a[i] - 'A' + 10;             //求出字母所代表的十进制数；
//		t1 = t1*n + t;        //求出最后总转换为十进制数；
//	}
//	printf("转化为十进制形式是：%ld\n", t1);   //输出最终结果；
//	return 0;
//}

#include<stdio.h>
int main(void)
{
	long t1;    //用来计算所转化的十进制数；
	char a[100];   //用字符串数组来存放所输入的进制数；
	int num, i, temp, t3;
	printf("请输入进制数：\n");
	gets(a);   //输入进制数；
	printf("请输入要转换的进制数：2--8--16\n");
	scanf("%d",&num);
	strupr(a);   //把字符数组中的小写字母改为大写字母；   strlwr() 把大写字母转化为小写字母；
	t3 = strlen(a);   //求出字符串的长度；
	t1 = 0;
	for (i = 0; i < t3; i++)
	{
		if (a[i] - '0' >= num&&a[i] < 'A' || a[i] - 'A' + 10 >= num)  //判断所输入的数据和进制数是否相同；
		{
			printf("您的输入有误!!");
			exit(0);
		}
		if (a[i] >= '0'&&a[i] <= '9'&&a[i] - '0' < num)      //判断是否为数字；
			temp = a[i] - '0';
		else if (num >= 11 && (a[i] >= 'A'&&a[i] <= 'A' + num - 10))         //判断是否位字母；
		    temp = a[i] - 'A' + 10;
		t1 = t1*num + temp;
	}
	printf("转化成十进制数为:%d\n",t1);
	return 0;
}

