#include<stdio.h>
#include<string.h>
//#include<windows.h>
int Leap_Year_Mon[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
int Mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
char Weeks[7][5] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
//����һ���꣬�£��սṹ�壻
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
	//�Ѽ����������ݾ�1970�������ͳ�Ƴ�����Days_Sum��
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

	//������̼�������1��1�ŵ����ڣ�
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
	int j = 1;//������ʾ���ڣ�
	int t = 0;//�������������·ݵ�������
	int count = 0;//������¼�����������
	if (judge == 1)
	{
		//�ҵ������·��ǵڼ����£��м��죻
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
	int m = 5;   // m������¼1970��1��1�ŵ�λ�ã�
	int t1 = 0;  //�������ռ��̼������ݺ��·ݾ���1970��ľ��룻
	int Day_count = 0;   //����������̼������ݺ��·ݾ���1��1�ŵ�������
						 //system("cls");
						 //������������ڣ�
	printf("\n\t\t %4d �� %02d ��\n\n", year, mon);
	printf("\t");
	for (i = 0; i <7; i++)
	{
		printf("%s   ", Weeks[i]);
	}
	puts("");
	t1 = Dis(year, mon);  //�ҵ����ռ��̼������ݺ��·ݵ�1��1�ŵ����ھ���1970��ľ��룻
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
	printf("��������ݺ��·ݣ�\n");
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
			printf("�����������д���\n");
			printf("��������ݺ��·ݣ�\n");
			scanf("%d%d", &year, &mon);
		}
		printf("�����Ƿ�Ҫ���������Y/y---�ǣ�N/n---��\n");
		fflush(stdin);
		getchar();
		ch = getchar();
		if (ch == 'Y' || ch == 'y')
		{
			flag = 1;
			printf("��������ݺ��·ݣ�\n");
			scanf("%d%d", &year, &mon);
		}
		else
			flag = 0;
	}
	return 0;
}