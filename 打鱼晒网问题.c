#include<stdio.h>
//判断是否是闰年；
int Leap_Year(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		return 1;
	else
		return 0;
}
int Days(int year, int mon, int day)
{
	int i,flag=0,DaysSum=0;
	int Ryear = 2011, Rmon = 1, Rday = 1;
	int Leap_mon[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int Fmon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (year > Ryear)
	{
		for (i = 0; i < year - Ryear; i++)
			if (Leap_Year(year + i) == 1)
				DaysSum += 366;
			else
				DaysSum += 365;
	}
	else
		DaysSum=0;
	for (i = 0; i < mon - 1; i++)
		DaysSum += Fmon[i];
	DaysSum += day;
	return DaysSum;
}
int main(void)
{
	int year, mon, day,sum=0;
	printf("请输入年 月 日 \n");
	scanf("%d%d%d",&year,&mon,&day);
	sum=Days(year, mon, day);
	printf("%d 年 %d 月 %d 日 是从2011年1月1日起的第 %d天\n",year,mon,day,sum);
	return 0;
}