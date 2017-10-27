#include<stdio.h>
#include<string.h>
//#include<windows.h>
int Leap_Year_Mon[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
int Mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
char Weeks[7][5] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
//定义一个年，月，日结构体；
typedef struct _Distance
{
	int year;
	int mon;
	int day;
}Distance;
int Dis(int year, int mon)
{
	int i, j;
	int Days_Sum = 0;
	int temp_Weeek = 0;
	Distance dis;
	dis.year = 1970;
	dis.mon = 1;
	dis.day = 1;
	//把键盘输入的年份距1970年的天数统计出来给Days_Sum；
	for (i = dis.year; i <year; i++)
	{
		if (Leap_Year(i))
		{
			Days_Sum += 366;
		}
		else
		{
			Days_Sum += 365;
		}
	}
	for (i = 0; i < mon - 1; i++)
	{
		if (Leap_Year(year))
		{
			Days_Sum += Leap_Year_Mon[i];
		}
		else
		{
			Days_Sum += Mon[i];
		}
	}

	//计算键盘键入的年的1月1号的星期；
	temp_Weeek = Days_Sum % 7;
	return temp_Weeek;
}
int  Leap_Year(int year)
{
	int flag = 0;
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		flag = 1;
	else
		flag = 0;
	return flag;
}
void print(int judge, int year, int mon, int Pos)
{
	int i;
	int j = 1;//用来表示日期；
	int t = 0;//用来接收输入月份的天数；
	int count = 0;//用来记录输出的天数；
	if (judge == 1)
	{
		//找到输入月份是第几个月，有几天；
		for (i = 0; i <12; i++)
		{
			if (i == mon - 1)
			{
				t = Leap_Year_Mon[i];
				break;
			}
		}
		printf("\n\t");
		for (i = 1; count<t; i++)
		{
			if (i >= Pos)
			{
				printf("%2d    ", j++);
				count++;
				if (i % 7 == 0)
					printf("\n\n\t");
			}
			else
			{
				printf("      ");
			}
		}
	}
	else
	{

		for (i = 0; i <12; i++)
		{
			if (i == mon - 1)
			{
				t = Mon[i];
				break;
			}
		}
		printf("\n\t");
		for (i = 1; count<t; i++)
		{
			if (i >= Pos)
			{
				printf("%2d    ", j++);
				count++;
				if (i % 7 == 0)
					printf("\n\n\t");
			}
			else
			{
				printf("      ");
			}
		}

	}
	getch();
	puts("\n");
}
void Mon_Print(int judge, int year, int mon)
{
	int i;
	int m = 5;   // m用来记录1970年1月1号的位置；
	int t1 = 0;  //用来接收键盘键入的年份和月份距离1970年的距离；
	int Day_count = 0;   //用来计算键盘键入的年份和月份距离1月1号的天数；
						 //system("cls");
						 //输出才日历星期；
	printf("\n\t\t %4d 年 %02d 月\n\n", year, mon);
	printf("\t");
	for (i = 0; i <7; i++)
	{
		printf("%s   ", Weeks[i]);
	}
	puts("");
	t1 = Dis(year, mon);  //找到接收键盘键入的年份和月份的1月1号的星期距离1970年的距离；
	switch (t1)
	{
	case 0:
		print(Leap_Year(year), year, mon, m);
		break;
	case 1:
		print(Leap_Year(year), year, mon, m + 1);
		break;
	case 2:
		print(Leap_Year(year), year, mon, m + 2);
		break;
	case 3:
		print(Leap_Year(year), year, mon, m - 4);
		break;
	case 4:
		print(Leap_Year(year), year, mon, m - 3);
		break;
	case 5:
		print(Leap_Year(year), year, mon, m - 2);
		break;
	case 6:
		print(Leap_Year(year), year, mon, m - 1);
		break;
	default:
		break;
	}
}
int main(void)
{
	int year = 0;
	int mon = 0;
	int t = 0;
	int flag = 1;
	char ch;
	printf("请输入年份和月份：\n");
	scanf("%d%d", &year, &mon);
	while (flag == 1)
	{
		if (year >= 1970)
		{
			t = Leap_Year(year);
			Mon_Print(t, year, mon);
		}
		else
		{
			printf("你输入的年份有错误！\n");
			printf("请输入年份和月份：\n");
			scanf("%d%d", &year, &mon);
		}
		printf("请问是否还要输出日历：Y/y---是，N/n---否\n");
		fflush(stdin);
		getchar();
		ch = getchar();
		if (ch == 'Y' || ch == 'y')
		{
			flag = 1;
			printf("请输入年份和月份：\n");
			scanf("%d%d", &year, &mon);
		}
		else
			flag = 0;
	}
	return 0;
}