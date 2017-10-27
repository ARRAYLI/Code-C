
#if 1
//学生成绩管理系统；
#include<stdio.h>
#include<malloc.h>
//学生基本信息链表；
typedef struct _Stu
{
	char name[20];
	char num[20];
	float score;
	struct _Stu* next;
}Stu, *Pstu;
//建立头结点并对链表进行初始化；
void InitList(Pstu* LinkList)
{
	*LinkList = (Pstu)malloc(sizeof(Stu));
	(*LinkList)->next = NULL;
}

//尾插法建立链表；
void InsertTail(Pstu* LinkList)
{
	Pstu p, pt;
	p = *LinkList;
	pt = (Pstu)malloc(sizeof(Stu));
	printf("请输入学生的学号，姓名，成绩：\n");
	scanf("%s%s%f", pt->num, pt->name, &pt->score);
	if (p->next == NULL)
	{
		p->next = pt;
		pt->next = NULL;
		//p = pt;
	}
	else
	{
		//	printf("请输入学生的学号，姓名，成绩：\n");
		//		scanf("%ld%s%f", &pt->num, pt->name, &pt->score);
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = pt;
		pt->next = NULL;
		//p = pt;

	}
}
//输出链表中的信息；
void Output(Pstu LinkList)
{
	Pstu p = LinkList->next;
	while (p != NULL)
	{
		printf("学号：%s\t姓名：%s\t成绩：%.2f\n", p->num, p->name, p->score);
		p = p->next;
	}
}

//按学号排序；
void SortByNum(Pstu* LinkList,int len)
{
	int i, j;
	Pstu temp,pNow=(*LinkList)->next;
	Pstu nPos=pNow->next;
	Pstu p3 = nPos->next;
	Pstu pre;
	//for (i = 0; i < len; i++)
	//{
	//	
	//	for (j = 0; j < len - i - 1;j++)
	//	{
	//		if (strcmp(p->num, pt->num)>0)
	//		{
	//			p->next = pt->next;
	//			pt->next = p;
	//			p = pt;
	//		}
	//	}
	//	p = p->next;
	//	pt = p->next;
	//}
	for (i = 0; i < len; i++)
	{
		pNow = (*LinkList)->next;
		pre = (*LinkList);
		for (j = 0; j < len - i - 1; j++)
		{
			if (strcmp(pNow->num, nPos->num)>0)
			{
				nPos->next = pNow;
				pNow->next = p3;
				(*LinkList)->next = nPos;
			}
			else
			{
				(*LinkList) = (*LinkList)->next;
				pNow = pNow->next;
				nPos = nPos->next;
				p3 = p3->next;
			}
		}
	}
}

//释放内存；
void Free(Pstu* LinkList)
{
	Pstu p = *LinkList,q;
	while (p->next!=NULL)
	{
		q = p->next;

	}
}
int main(void)
{
	int i;
	int  count = 0;
	Pstu LinkList;
	InitList(&LinkList);
	printf("请输入学生人数：\n");
	scanf("%d", &count);
	for (i = 0; i < count; i++)
		InsertTail(&LinkList);
	//SortByNum(&LinkList, count);

	//InsertTail(&LinkList);
	//InsertTail(&LinkList);
	//
	Output(LinkList);
	/*
	41509050117 李镇军 98
	41509050116 王建 100
	41509050115 孙希望 100





	*/

	Free(&LinkList);
	return 0;
}

#endif


#if 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define L 20
//定义学生信息结构体；
typedef struct _Stu
{
	char name[20];
	char num[15];
	float score;
}Stu;

//进度条；
void InterfaceBar()
{
	int i;
	for (i = 1; i < 101; i++)
	{
		if (i < 10)
		{
			printf("%d%%", i);
			Sleep(100);
			printf("\b\b");

		}
		else if (i < 100)
		{
			printf("%d%%", i);
			Sleep(100);
			printf("\b\b\b");
		}

		else
		{
			printf("%d%%", i);
			Sleep(100);
		}
	}
	printf("...\n");



}

//菜单；
void Menu()
{
	printf("       1--输入学生信息\n\n");
	printf("       2--给学生信息通过学号排序\n\n");
	printf("       3--给学生信息通过分数排序，若分数相同，则按照学号排序\n\n");
	printf("       4--退出程序\n\n");
}
//给学生结构体数组输入信息；
void Input(Stu StuArray[], int len)
{
	int i;
	printf("正在加载输入信息，请稍等,已加载");
	InterfaceBar();
	puts("");
	for (i = 0; i < len; i++)
	{
		scanf("%s%s%f", StuArray[i].num, StuArray[i].name, &StuArray[i].score);
	}
	printf("\n输入学生数据完成！！\n\n");
}


//输出学生结构体数组；
void Output(Stu StuArray[], int len)
{
	int i;
	puts("");
	for (i = 0; i < len; i++)
	{
		printf("%s\t%s\t%.2f\n", StuArray[i].num, StuArray[i].name, StuArray[i].score);
	}
	puts("");
}

//按学号排序；
void SortByNum(Stu StuArray[], int len)
{
	Stu temp;
	int i, j;
	int m = 0, n = 0;
	printf("正在按学号排序，已加载 ");
	InterfaceBar();
	//printf("按学号排序完成！！\n");
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			//m,n用来存放两个int 型学号；
			//m = 
			//n = 
			if (strcmp(StuArray[j].num, StuArray[j + 1].num)>0)
			{
				temp = StuArray[j];
				StuArray[j] = StuArray[j + 1];
				StuArray[j + 1] = temp;
			}
		}
	}
	printf("\n按学号排序完成！！\n\n");
}

//先按学号排序，再按分数排序，分数相同的任然按学号排序；
void SortByScore(Stu StuArray[], int len)
{
	int i, j;
	Stu temp;
	//按分数排序；
	printf("正在按分数排序，已加载 ");
	InterfaceBar();
	//printf("按分数排序完成！！\n");
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (StuArray[j].score>StuArray[j + 1].score)
			{
				temp = StuArray[j];
				StuArray[j] = StuArray[j + 1];
				StuArray[j + 1] = temp;
			}
			if ((StuArray[j].score == StuArray[j + 1].score) && (strcmp(StuArray[j].num, StuArray[j + 1].num)>0))
			{
				temp = StuArray[j];
				StuArray[j] = StuArray[j + 1];
				StuArray[j + 1] = temp;
			}
		}
	}
	printf("\n按分数排序完成！！\n\n");
}
int main(void)
{
	Stu StuArray[L];
	int count = 0;
	int menu = 0;
	Menu();
	scanf("%d", &menu);
	while (menu != 0)
	{
		switch (menu)
		{
		case 1:
		{
			printf("请输入学会个数：\n");
			scanf("%d", &count);
			Input(StuArray, count);
		}break;
		case 2:
		{
			SortByNum(StuArray, count);
			printf("学生信息通过学号排序后的书序为：\n");
			Output(StuArray, count);
		}break;
		case 3:
		{
			SortByScore(StuArray, count);
			printf("学生信息通过分数排序，若分数相同，则按照学号排序，排序后的结果为：\n");
			Output(StuArray, count);
		}break;
		case 4:
		{
			exit(0);
			//return;

		}
		default:
			continue;
		}
		Menu();
		scanf("%d", &menu);
	}
	//printf("请输入学会个数：\n");
	//scanf("%d", &count);
	//Input(StuArray, count);
	//SortByNum(StuArray, count);
	//Output(StuArray, count);
	//SortByScore(StuArray, count);
	//Output(StuArray, count);


	/*

	41509050118 孙俊 98
	41509050115 李镇军 100
	41509050117 孙希望  98
	41509050116 王胜东  88





	*/

	//InterfaceBar();
	return 0;
}

#endif


#if 0
//结构体数组法给学生信息排序；
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define L 20
//定义学生信息结构体；
typedef struct _Stu
{
	char name[20];
	char num[15];
	float score;
}Stu;

//菜单；
void Menu()
{
	printf("       1--输入学生信息\n\n");
	printf("       2--给学生信息通过学号排序\n\n");
	printf("       3--给学生信息通过分数排序，若分数相同，则按照学号排序\n\n");
	printf("       4--退出程序\n\n");
}
//给学生结构体数组输入信息；
void Input(Stu StuArray[], int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		scanf("%s%s%f", StuArray[i].num, StuArray[i].name, &StuArray[i].score);
	}
	printf("输入学生数据完成！！\n");
}


//输出学生结构体数组；
void Output(Stu StuArray[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%s\t%s\t%.2f\n", StuArray[i].num, StuArray[i].name, StuArray[i].score);
	}
	puts("");
}

//按学号排序；
void SortByNum(Stu StuArray[], int len)
{
	Stu temp;
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (strcmp(StuArray[j].num, StuArray[j + 1].num)>0)
			{
				temp = StuArray[j];
				StuArray[j] = StuArray[j + 1];
				StuArray[j + 1] = temp;
			}
		}
	}
	printf("按学号排序完成！！\n");
}

//先按学号排序，再按分数排序，分数相同的任然按学号排序；
void SortByScore(Stu StuArray[], int len)
{
	int i, j;
	Stu temp;
	//按分数排序；
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (StuArray[j].score>StuArray[j + 1].score)
			{
				temp = StuArray[j];
				StuArray[j] = StuArray[j + 1];
				StuArray[j + 1] = temp;
			}
			if ((StuArray[j].score == StuArray[j + 1].score) && (strcmp(StuArray[j].num, StuArray[j + 1].num)>0))
			{
				temp = StuArray[j];
				StuArray[j] = StuArray[j + 1];
				StuArray[j + 1] = temp;
			}
		}
	}
	printf("按分数排序完成！！\n");
}
int main(void)
{
	Stu StuArray[L];
	int count = 0;
	int menu = 0;
	Menu();
	scanf("%d", &menu);
	while (menu != 0)
	{
		switch (menu)
		{
		case 1:
		{
			printf("请输入学会个数：\n");
			scanf("%d", &count);
			Input(StuArray, count);
		}break;
		case 2:
		{
			SortByNum(StuArray, count);
			printf("学生信息通过学号排序后的书序为：\n");
			Output(StuArray, count);
		}break;
		case 3:
		{
			SortByScore(StuArray, count);
			printf("学生信息通过分数排序，若分数相同，则按照学号排序，排序后的结果为：\n");
			Output(StuArray, count);
		}break;
		case 4:
		{
			exit(0);
		}
		default:
			continue;
		}
		Menu();
		scanf("%d", &menu);
	}

	/*

	41509050118 孙俊 98
	41509050115 李镇军 100
	41509050117 孙希望  98
	41509050116 王胜东  88
	*/

	return 0;
}

#endif

