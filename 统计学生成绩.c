
#if 1
//ѧ���ɼ�����ϵͳ��
#include<stdio.h>
#include<malloc.h>
//ѧ��������Ϣ����
typedef struct _Stu
{
	char name[20];
	char num[20];
	float score;
	struct _Stu* next;
}Stu, *Pstu;
//����ͷ��㲢��������г�ʼ����
void InitList(Pstu* LinkList)
{
	*LinkList = (Pstu)malloc(sizeof(Stu));
	(*LinkList)->next = NULL;
}

//β�巨��������
void InsertTail(Pstu* LinkList)
{
	Pstu p, pt;
	p = *LinkList;
	pt = (Pstu)malloc(sizeof(Stu));
	printf("������ѧ����ѧ�ţ��������ɼ���\n");
	scanf("%s%s%f", pt->num, pt->name, &pt->score);
	if (p->next == NULL)
	{
		p->next = pt;
		pt->next = NULL;
		//p = pt;
	}
	else
	{
		//	printf("������ѧ����ѧ�ţ��������ɼ���\n");
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
//��������е���Ϣ��
void Output(Pstu LinkList)
{
	Pstu p = LinkList->next;
	while (p != NULL)
	{
		printf("ѧ�ţ�%s\t������%s\t�ɼ���%.2f\n", p->num, p->name, p->score);
		p = p->next;
	}
}

//��ѧ������
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

//�ͷ��ڴ棻
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
	printf("������ѧ��������\n");
	scanf("%d", &count);
	for (i = 0; i < count; i++)
		InsertTail(&LinkList);
	//SortByNum(&LinkList, count);

	//InsertTail(&LinkList);
	//InsertTail(&LinkList);
	//
	Output(LinkList);
	/*
	41509050117 ����� 98
	41509050116 ���� 100
	41509050115 ��ϣ�� 100





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
//����ѧ����Ϣ�ṹ�壻
typedef struct _Stu
{
	char name[20];
	char num[15];
	float score;
}Stu;

//��������
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

//�˵���
void Menu()
{
	printf("       1--����ѧ����Ϣ\n\n");
	printf("       2--��ѧ����Ϣͨ��ѧ������\n\n");
	printf("       3--��ѧ����Ϣͨ������������������ͬ������ѧ������\n\n");
	printf("       4--�˳�����\n\n");
}
//��ѧ���ṹ������������Ϣ��
void Input(Stu StuArray[], int len)
{
	int i;
	printf("���ڼ���������Ϣ�����Ե�,�Ѽ���");
	InterfaceBar();
	puts("");
	for (i = 0; i < len; i++)
	{
		scanf("%s%s%f", StuArray[i].num, StuArray[i].name, &StuArray[i].score);
	}
	printf("\n����ѧ��������ɣ���\n\n");
}


//���ѧ���ṹ�����飻
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

//��ѧ������
void SortByNum(Stu StuArray[], int len)
{
	Stu temp;
	int i, j;
	int m = 0, n = 0;
	printf("���ڰ�ѧ�������Ѽ��� ");
	InterfaceBar();
	//printf("��ѧ��������ɣ���\n");
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			//m,n�����������int ��ѧ�ţ�
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
	printf("\n��ѧ��������ɣ���\n\n");
}

//�Ȱ�ѧ�������ٰ��������򣬷�����ͬ����Ȼ��ѧ������
void SortByScore(Stu StuArray[], int len)
{
	int i, j;
	Stu temp;
	//����������
	printf("���ڰ����������Ѽ��� ");
	InterfaceBar();
	//printf("������������ɣ���\n");
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
	printf("\n������������ɣ���\n\n");
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
			printf("������ѧ�������\n");
			scanf("%d", &count);
			Input(StuArray, count);
		}break;
		case 2:
		{
			SortByNum(StuArray, count);
			printf("ѧ����Ϣͨ��ѧ������������Ϊ��\n");
			Output(StuArray, count);
		}break;
		case 3:
		{
			SortByScore(StuArray, count);
			printf("ѧ����Ϣͨ������������������ͬ������ѧ�����������Ľ��Ϊ��\n");
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
	//printf("������ѧ�������\n");
	//scanf("%d", &count);
	//Input(StuArray, count);
	//SortByNum(StuArray, count);
	//Output(StuArray, count);
	//SortByScore(StuArray, count);
	//Output(StuArray, count);


	/*

	41509050118 �￡ 98
	41509050115 ����� 100
	41509050117 ��ϣ��  98
	41509050116 ��ʤ��  88





	*/

	//InterfaceBar();
	return 0;
}

#endif


#if 0
//�ṹ�����鷨��ѧ����Ϣ����
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#define L 20
//����ѧ����Ϣ�ṹ�壻
typedef struct _Stu
{
	char name[20];
	char num[15];
	float score;
}Stu;

//�˵���
void Menu()
{
	printf("       1--����ѧ����Ϣ\n\n");
	printf("       2--��ѧ����Ϣͨ��ѧ������\n\n");
	printf("       3--��ѧ����Ϣͨ������������������ͬ������ѧ������\n\n");
	printf("       4--�˳�����\n\n");
}
//��ѧ���ṹ������������Ϣ��
void Input(Stu StuArray[], int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		scanf("%s%s%f", StuArray[i].num, StuArray[i].name, &StuArray[i].score);
	}
	printf("����ѧ��������ɣ���\n");
}


//���ѧ���ṹ�����飻
void Output(Stu StuArray[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%s\t%s\t%.2f\n", StuArray[i].num, StuArray[i].name, StuArray[i].score);
	}
	puts("");
}

//��ѧ������
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
	printf("��ѧ��������ɣ���\n");
}

//�Ȱ�ѧ�������ٰ��������򣬷�����ͬ����Ȼ��ѧ������
void SortByScore(Stu StuArray[], int len)
{
	int i, j;
	Stu temp;
	//����������
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
	printf("������������ɣ���\n");
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
			printf("������ѧ�������\n");
			scanf("%d", &count);
			Input(StuArray, count);
		}break;
		case 2:
		{
			SortByNum(StuArray, count);
			printf("ѧ����Ϣͨ��ѧ������������Ϊ��\n");
			Output(StuArray, count);
		}break;
		case 3:
		{
			SortByScore(StuArray, count);
			printf("ѧ����Ϣͨ������������������ͬ������ѧ�����������Ľ��Ϊ��\n");
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

	41509050118 �￡ 98
	41509050115 ����� 100
	41509050117 ��ϣ��  98
	41509050116 ��ʤ��  88
	*/

	return 0;
}

#endif

