#define L01
#ifdef L01
#include <stdio.h>
#include<string.h>
#define L 100
int main(void)
{
	int n; int i, j, k, l;
	int m;
	int quan[L] = { 0 };
	printf("������Ȩֵ����Ŀ��\n");
	scanf("%d", &n);
	printf("������һ��Ȩֵ��\n");
	for (i = 0; i<n; i++)
	{
		scanf("%d", &quan[i]);
	}
	printf("��Ҫ�������������Ȩֵ��:\n");
	for (i = 0; i<n; i++)
	{
		printf("%-3d", quan[i]);
	}
	puts("");
	printf("�������Ŷ������Ĺ��̣�\n");
	for (i = 0; i<n; i++)
	{
		for (k = 0; k<n - 1; k++)
		{
			for (j = k + 1; j<n; j++)
			{
				if (quan[k]>quan[j])
				{
					m = quan[k];
					quan[k] = quan[j];
					quan[j] = m;
				}
			}
		}
		for (l = i; l<n; l++)
		{
			printf("%-3d", quan[l]);
		}
		puts("");
		quan[i + 1] = quan[i] + quan[i + 1];
	}
	return 0;
}
#endif
#ifdef L02
#include<stdio.h>
#define L 9
int main(void)
{
	int i, j;
	puts("--------------------------�žų˷���------------------------\n");
	for (i = 1; i <= L; i++)
	{
		for (j = 1; j <= i; j++)
		{

			printf("%d*%d=%d\t", j, i, i*j);
		}
		puts("");

	}
	puts("");
	puts("--------------------------�žų˷���------------------------\n");


	return 0;
}
#endif
#ifdef L03
#include<stdio.h>
#include<stdlib.h>
typedef struct _Node
{
	int value;
	struct _Node* next;
}NODE, *PNODE;
void HeadTail(PNODE* head, int val)
{
	PNODE p = *head;
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	pNew->value = val;
	pNew->next = NULL;
	if (*head == NULL)
	{
		p->next = pNew;
		p = pNew;
	}
	else
	{
		pNew->next = p;
		p = pNew;
	}
}
void Show(PNODE head)
{
	PNODE p = head;
	while (p != NULL)
	{
		printf("%d\n", p->value);
		p = p->next;
	}
}
int main(void)
{
	PNODE head = NULL;
	HeadTail(&head, 1);
	Show(head);
	return 0;
}
#endif