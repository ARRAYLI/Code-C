#define CL_00
#ifdef CL_01
//#include<stdio.h>
//#define X 3
//#define Y 4
//int main(void)
//{
//	/*float A[7][7] = { { 3, -5, 6, 4, -2, -3, 8 },
//	{ 1, 1, -9, 15, 1, -9, 2 },
//	{ 2, -1, 7, 5, -1, 6, 11 },
//	{ -1, 1, 3, 2, 7, -1, -2 },
//	{ 4, 3, 1, -7, 2, 1, 1 },
//	{ 2, 9, -8, 11, -1, -4, -1 },
//	{ 7, 2, -1, 2, 7, -1, 9 } };
//	float b[7] = { 11, 2, 29, 9, 5, 8, 25 };
//	float x[7] = { 0 };*/
//	int A[X][X] = { 2, 4, 6, 3, 2, 1, 1, 1, 2 };
//	int b[X] = { 28, 10, 9 };
//	int x[X] = { 0 };
//	int Aik, S;
//	int i, j, k;
//	int size = X;
//	printf("A[][]\n");
//	for (i = 0; i<size; i++)
//	{
//		for (j = 0; j<size; j++)
//			printf("%-4d ", A[i][j]);
//		printf("\n");
//	}
//	printf("b[]\n");
//	for (i = 0; i<size; i++)
//		printf("%-4d ", b[i]);
//	printf("\n\n");
//	//��ȥ����
//	for (k = 0; k<size - 1; k++)
//	{
//		if (!A[k][k])
//			return -1;
//		for (i = k + 1; i<size; i++)
//		{
//			Aik = A[i][k] / A[k][k];
//			for (j = k; j<size; j++)
//			{
//				A[i][j] = A[i][j] - Aik*A[k][j];
//			}
//			b[i] = b[i] - Aik*b[k];
//		}
//	}
//	//��ȥ�Ľ��
//	printf("A[]\n");
//	for (i = 0; i<size; i++)
//	{
//		for (j = 0; j<size; j++)
//			printf("%-4d ", A[i][j]);
//		printf("\n");
//	}
//	printf("b[]\n");
//	for (i = 0; i<size; i++)
//		printf("%-4d", b[i]);
//	printf("\n\n");
//	//�ش�����
//	x[size - 1] = b[size - 1] / A[size - 1][size - 1];
//	for (k = size - 2; k >= 0; k--)
//	{
//		S = b[k];
//		for (j = k + 1; j<size; j++)
//		{
//			S = S - A[k][j] * x[j];
//		}
//		x[k] = S / A[k][k];
//	}
//	//solution
//	printf("The solution x[]=\n");
//	for (i = 0; i<size; i++)
//		printf("%-4d ", x[i]);
//	puts("");
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	float A[7][7] = { { 3, -5, 6, 4, -2, -3, 8 },
//	{ 1, 1, -9, 15, 1, -9, 2 },
//	{ 2, -1, 7, 5, -1, 6, 11 },
//	{ -1, 1, 3, 2, 7, -1, -2 },
//	{ 4, 3, 1, -7, 2, 1, 1 },
//	{ 2, 9, -8, 11, -1, -4, -1 },
//	{ 7, 2, -1, 2, 7, -1, 9 } };
//	float b[7] = { 11, 2, 29, 9, 5, 8, 25 };
//	float x[7] = { 0 };
//	float Aik, S;
//	int i, j, k;
//	int size = 7;
//	printf("A[][]\n");
//	for (i = 0; i<size; i++)
//	{
//		for (j = 0; j<size; j++)
//			printf("%f ", A[i][j]);
//		printf("\n");
//	}
//	printf("b[]\n");
//	for (i = 0; i<size; i++)
//		printf("%f ", b[i]);
//	printf("\n\n");
//	//��ȥ����
//	for (k = 0; k<size - 1; k++)
//	{
//		if (!A[k][k])
//			return -1;
//		for (i = k + 1; i<size; i++)
//		{
//			Aik = A[i][k] / A[k][k];
//			for (j = k; j<size; j++)
//			{
//				A[i][j] = A[i][j] - Aik*A[k][j];
//			}
//			b[i] = b[i] - Aik*b[k];
//		}
//	}
//	//��ȥ�Ľ��
//	printf("A[]\n");
//	for (i = 0; i<size; i++)
//	{
//		for (j = 0; j<size; j++)
//			printf("%f ", A[i][j]);
//		printf("\n");
//	}
//	printf("b[]\n");
//	for (i = 0; i<size; i++)
//		printf("%f ", b[i]);
//	printf("\n\n");
//	//�ش�����
//	x[size - 1] = b[size - 1] / A[size - 1][size - 1];
//	for (k = size - 2; k >= 0; k--)
//	{
//		S = b[k];
//		for (j = k + 1; j<size; j++)
//		{
//			S = S - A[k][j] * x[j];
//		}
//		x[k] = S / A[k][k];
//	}
//	//solution
//	printf("The solution x[]=\n");
//	for (i = 0; i<size; i++)
//		printf("%f ", x[i]);
//	return 0;
//}
#endif
#ifdef CL_02
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define NUMBER 50
#define Esc   'N'
#define Enter 'Y'
float A[NUMBER][NUMBER + 1], ark;
int flag, n;
void exchange(int r, int k);
float cmp(int k);
void message();
int main()
{
	int x[NUMBER];      /*���������ڴ�ŷ��̽�*/
	int r, k, i, j;
	char celect;
	system("cls");

	printf("\n\n�ø�˹��Ԫ�������Է����飺\n");
	printf("\n\n1.�ⷽ�����밴--Y,.�˳���ʽ�밴--N:\n");
	//printf("\n\n2.�˳���ʽ�밴Esc.\n");
	celect = getchar();
	if (celect == 'N')
		exit(0);
	printf("\n\n ���뷽�����ά����n=");
	scanf("%d", &n);
	printf(" \n\n��������ϵ������A������b:\n");
	for (i = 1; i <= n; i++)
	{
		printf("\n\n������a%d1--a%d%dϵ��������b%d:\n", i, i, n, i);
		/*ʵ�ֽ�ÿһ���е�ϵ��������һ�������룬��֮���ÿո�񿪣������س�ȷ��*/

		for (j = 1; j <= n + 1; j++)     /*���ղ����������������*/
			scanf("%f", &A[i][j]);
	}
	for (k = 1; k <= n - 1; k++)
	{
		ark = cmp(k);
		if (ark == 0)                /*�жϷ����Ƿ�Ϊ���Է��̣����Ƿ�Ϸ�*/
		{
			printf("\n\n�˷����鲻�Ϸ�!"); message();
		}
		else if (flag != k)
			exchange(flag, k);
		for (i = k + 1; i <= n; i++)
			for (j = k + 1; j <= n + 1; j++)
				A[i][j] = A[i][j] - A[k][j] * A[i][k] / A[k][k];
	}
	x[n] = A[n][n + 1] / A[n][n];
	for (k = n - 1; k >= 1; k--)
	{
		float me = 0;
		for (j = k + 1; j <= n; j++)
		{
			me = me + A[k][j] * x[j];
		}
		x[k] = (A[k][n + 1] - me) / A[k][k];
	}
	for (i = 1; i <= n; i++)
	{
		printf(" \n\nx%d=%f", i, x[i]);
	}
	message();

	return 1;
}

void exchange(int r, int k)         /*�����еľغ���*/
{
	int i;
	for (i = 1; i <= n + 1; i++)
		A[0][i] = A[r][i];
	for (i = 1; i <= n + 1; i++)
		A[r][i] = A[k][i];
	for (i = 1; i <= n + 1; i++)
		A[k][i] = A[0][i];
}

float cmp(int k)           /*��Уϵ����С�ĺ���*/
{
	int i;
    float temp = 0;
	for (i = k; i <= n; i++)
		if (fabs(A[i][k])>temp)
		{
			temp = fabs(A[i][k]);
			flag = i;
		}
	return temp;           
	/*
	2 4 6 28
	3 2 1 10
	1 1 2 9
	
	*/
}

void message()                                       /*ʵ�ֲ˵�ѡ��ĺ���*/
{
	printf("\n\n �������㰴---Y ,�˳���ʽ��-- N!\n");
	switch (getchar())
	{
	case Enter: main();
	case Esc: exit(0);
	default:
	{
		printf("\n\n���Ϸ�������!"); 
		message(); 
	}
	}
}
#endif
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define NUMBER 20
#define Esc  'N'
#define Enter 'Y'
float A[NUMBER][NUMBER + 1], ark;
int flag, n;
void exchange(int r, int k);
float cmp(int k);
void message();

int main()
{
	float x[NUMBER];      /*���������ڴ�ŷ��̽�*/
	int  k, i, j;
	char celect;
	system("cls");

	printf("\n\n��Gauss����Ԫ��Ԫ�������Է�����\n");
	printf("\n\n1.�ⷽ�����밴 --Y  ");
	printf("2.�˳���ʽ�밴 --N\n");
	celect = getchar();
   if (celect == Enter)
	{
		printf("\n���뷽�����ά����\nn=");
		scanf("%d", &n);
		printf(" \n��������ϵ������A������b:\n");
		for (i = 1; i <= n; i++)
		{
			printf("\n������a%d1--a%d%dϵ��������b%d:\n\n", i, i, n, i);
			/*ʵ�ֽ�ÿһ���е�ϵ��������һ�������룬��֮���ÿո�񿪣������س�ȷ��*/
			for (j = 1; j <= n + 1; j++)
			{
				/*���ղ����������������*/
				scanf("%f", &A[i][j]);
			}
		}
		for (k = 1; k <= n - 1; k++)
		{
			ark = cmp(k);
			if (ark == 0)                /*�жϷ����Ƿ�Ϊ���Է��̣����Ƿ�Ϸ�*/
			{
				printf("\n\n�˷����鲻�Ϸ�!");
				message();
			}
			else if (flag != k)
			{
				exchange(flag, k);
			}
			for (i = k + 1; i <= n; i++)
			{
				for (j = k + 1; j <= n + 1; j++)
				{
					A[i][j] = A[i][j] - A[k][j] * A[i][k] / A[k][k];
				}
			}
		}
		x[n] = A[n][n + 1] / A[n][n];
		for (k = n - 1; k >= 1; k--)
		{
			float me = 0;
			for (j = k + 1; j <= n; j++)
			{
				me = me + A[k][j] * x[j];
			}
			x[k] = (A[k][n + 1] - me) / A[k][k];
		}
		printf("\n�����Է�����Ľ�Ϊ��\n");
		for (i = 1; i <= n; i++)
		{
			printf(" \nx%d=%.2f\n", i, x[i]);
		}
		message();
		puts("");
	}
   else if(celect == Esc)
	{
		exit(0);
		puts("");
	}
	/*
	2 4 6 28
	3 2 1 10
	1 1 2 9
	*/
	return 1;
}

void exchange(int r, int k)         /*�����еľغ���*/
{
	int i;
	for (i = 1; i <= n + 1; i++)
		A[0][i] = A[r][i];
	for (i = 1; i <= n + 1; i++)
		A[r][i] = A[k][i];
	for (i = 1; i <= n + 1; i++)
		A[k][i] = A[0][i];
}

float cmp(int k)           /*��Уϵ����С�ĺ���*/
{
	int i;
	float temp = 0;
	for (i = k; i <= n; i++)
		if (fabs(A[i][k])>temp)
		{
			temp = fabs(A[i][k]);
			flag = i;
		}
	return temp;
}

void message()                                       /*ʵ�ֲ˵�ѡ��ĺ���*/
{
	char c;
	printf("\n\n�������㰴 Y ,�˳���ʽ�� N!\n");
	getchar();
	c = getchar();
	switch (c)
	{
	case 'Y': main();
	case 'N': exit(0);
	default:
	{
		printf("\n\n���Ϸ�������!\n");
		message(); 
	}
	}
}