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
//	//消去过程
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
//	//消去的结果
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
//	//回代过程
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
//	//消去过程
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
//	//消去的结果
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
//	//回代过程
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
	int x[NUMBER];      /*此数组用于存放方程解*/
	int r, k, i, j;
	char celect;
	system("cls");

	printf("\n\n用高斯消元法解线性方程组：\n");
	printf("\n\n1.解方程组请按--Y,.退出程式请按--N:\n");
	//printf("\n\n2.退出程式请按Esc.\n");
	celect = getchar();
	if (celect == 'N')
		exit(0);
	printf("\n\n 输入方程组的维数：n=");
	scanf("%d", &n);
	printf(" \n\n现在输入系数矩阵A和向量b:\n");
	for (i = 1; i <= n; i++)
	{
		printf("\n\n请输入a%d1--a%d%d系数和向量b%d:\n", i, i, n, i);
		/*实现将每一行中的系数和向量一次性输入，数之间用空格格开，输完后回车确定*/

		for (j = 1; j <= n + 1; j++)     /*将刚才输入的数存入数组*/
			scanf("%f", &A[i][j]);
	}
	for (k = 1; k <= n - 1; k++)
	{
		ark = cmp(k);
		if (ark == 0)                /*判断方程是否为线性方程，即是否合法*/
		{
			printf("\n\n此方程组不合法!"); message();
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

void exchange(int r, int k)         /*交换行的矩函数*/
{
	int i;
	for (i = 1; i <= n + 1; i++)
		A[0][i] = A[r][i];
	for (i = 1; i <= n + 1; i++)
		A[r][i] = A[k][i];
	for (i = 1; i <= n + 1; i++)
		A[k][i] = A[0][i];
}

float cmp(int k)           /*比校系数大小的函数*/
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

void message()                                       /*实现菜单选择的函数*/
{
	printf("\n\n 继续运算按---Y ,退出程式按-- N!\n");
	switch (getchar())
	{
	case Enter: main();
	case Esc: exit(0);
	default:
	{
		printf("\n\n不合法的输入!"); 
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
	float x[NUMBER];      /*此数组用于存放方程解*/
	int  k, i, j;
	char celect;
	system("cls");

	printf("\n\n用Gauss列主元消元法解线性方程组\n");
	printf("\n\n1.解方程组请按 --Y  ");
	printf("2.退出程式请按 --N\n");
	celect = getchar();
   if (celect == Enter)
	{
		printf("\n输入方程组的维数：\nn=");
		scanf("%d", &n);
		printf(" \n现在输入系数矩阵A和向量b:\n");
		for (i = 1; i <= n; i++)
		{
			printf("\n请输入a%d1--a%d%d系数和向量b%d:\n\n", i, i, n, i);
			/*实现将每一行中的系数和向量一次性输入，数之间用空格格开，输完后回车确定*/
			for (j = 1; j <= n + 1; j++)
			{
				/*将刚才输入的数存入数组*/
				scanf("%f", &A[i][j]);
			}
		}
		for (k = 1; k <= n - 1; k++)
		{
			ark = cmp(k);
			if (ark == 0)                /*判断方程是否为线性方程，即是否合法*/
			{
				printf("\n\n此方程组不合法!");
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
		printf("\n此线性方程组的解为：\n");
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

void exchange(int r, int k)         /*交换行的矩函数*/
{
	int i;
	for (i = 1; i <= n + 1; i++)
		A[0][i] = A[r][i];
	for (i = 1; i <= n + 1; i++)
		A[r][i] = A[k][i];
	for (i = 1; i <= n + 1; i++)
		A[k][i] = A[0][i];
}

float cmp(int k)           /*比校系数大小的函数*/
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

void message()                                       /*实现菜单选择的函数*/
{
	char c;
	printf("\n\n继续运算按 Y ,退出程式按 N!\n");
	getchar();
	c = getchar();
	switch (c)
	{
	case 'Y': main();
	case 'N': exit(0);
	default:
	{
		printf("\n\n不合法的输入!\n");
		message(); 
	}
	}
}