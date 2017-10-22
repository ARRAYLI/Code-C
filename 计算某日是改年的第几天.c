#include<stdio.h>
#include<string.h>
int IsLeap(int year)
{
	if (year % 400 == 0 || year % 4 == 0&&year%100!=0)
		return 1;
	else
		return 0;
}
void Calcul()
{
	int i;
	int year, mon, day;
	int sum = 0;
	int LeapYear_mon[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("请输入年，月，日：\n");
	scanf("%d%d%d", &year, &mon, &day);
	if (IsLeap(year))
	{
		for (i = 0; i < mon-1; i++)
			sum += LeapYear_mon[i]+day;
		  sum += day;
			printf("%d 年 %d 月 %d 日是第 %d 天\n",year,mon,day,sum);
	}
	else
	{
		for (i = 0; i < mon-1; i++)
			sum +=month[i];
		sum +=day;
		printf("%d 年 %d 月 %d 日是第 %d 天\n", year, mon, day, sum);
		
	}
	puts("");
}
int main(void)
{
	Calcul();
	return 0;
}