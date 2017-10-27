#if 0
#include<stdio.h>
#define X 4
#define Y 4
// 打印矩阵；
void pri(int a[][Y])
{
	int i, j;
	for (i = 0; i < X; i++)
	{
		for (j = 0; j < X; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}
//输入矩阵；
void scan(int b[][Y])
{
	int m, n;
	//printf("请输入题目中所示图的邻接矩阵A： \n");
	for (m = 0; m < X; m++)
		for (n = 0; n < Y; n++)
			scanf_s("%d", &b[m][n]);
}
//矩阵相加；
void plus(int a[][Y], int b[][Y], int c[][Y])
{
	int d, s;
	for (d = 0; d < X; d++)
		for (s = 0; s < Y; s++)
			c[d][s] = a[d][s] + b[d][s];
	pri(c);
}
//矩阵相乘
void mul(const int a[][Y], const int b[][Y], int c[][Y])
{
	int i, j, k;
	c[X][Y] = 0;
	for (i = 0; i < X; i++)
		for (j = 0; j < X; j++) {
			c[i][j] = 0;//add
			for (k = 0; k < X; k++)
				//c[i][j] += a[j][k] * b[k][j];//j 错了
				c[i][j] += a[i][k] * b[k][j];
		}
	//printf("长度为%d");
	pri(c);


}
//矩阵相减
void subtract(int a[][Y], int b[][Y], int c[][Y])
{
	int i, j;
	for (i = 0; i < X; i++)
		for (j = 0; j < X; j++)
			c[i][j] = a[i][j] - b[i][j];
	pri(c);
}
void copy(const int in[][Y], int out[][Y])
{
	for (int i = 0; i < X; i++)
		for (int j = 0; j < Y; j++)
			out[i][j] = in[i][j];
}
void Tlhl(int a[][Y])
{
	int temp = 1;
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < X; j++)
		{
			sum1 += a[i][j];
			if (j == i)
				sum2 += a[i][j];
		}
	}
	printf("长度为的通路有：%d条\n", sum1);
	printf("回路有：%d条\n", sum2);
}
//矩阵求阶乘(A^1~A^4);
void Fact(int a[][Y], int c[][Y])
{
	int i, j, k, x, temp = 1;
	int sum1 = 0, sum2 = 0;
	int d[X][Y] = { 0 };
	int b[X][Y] = { 0 };
	printf("请输入题中图的邻接矩阵A：\n");
	scan(a);
	copy(a, d);//将a复制给d
	for (x = 0; x < 3; x++)
	{
		printf("输出第 %d次 的A阶乘：   \n", temp);

		mul(a, d, c);//输入a d  输出 c
		Tlhl(c);
		copy(c, d);//将c复制给d 用于参与下一轮循环
		temp++;
		//pri(c);

	}
}
int main()
{
	int a[X][Y] = { 0 };// { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int m = 1, n = 1, o, p;
	//int a[X][Y];
	int b[X][Y] = { 0 }, c[X][Y] = { 0 }, d[X][Y] = { 0 };
	while (m == 1)
	{
		printf("请输入：1--表示求矩阵的加 减 乘运算  2--表示求矩阵阶乘\n");
		scanf_s("%d", &p);
		if (p == 1)
		{
			printf(" 请输入矩阵A：\n");
			scan(a);
			printf(" 请输入矩阵B：\n");
			scan(b);
			printf("请输入矩阵的运算类型：1---矩阵相加  2---矩阵相减  3---矩阵相乘\n");
			scanf_s("%d", &o);
			if (o == 1)   plus(a, b, c);
			if (o == 2)  subtract(a, b, c);
			if (o == 3)  mul(a, b, c);
			printf("请输入1表示继续运算，2表示退出运算\n");
			scanf_s("%d", &m);
			printf("\n");
		}
		else
		{
			Fact(a, c);
			printf("请输入1表示继续运算，2表示退出运算\n");
			scanf_s("%d", &m);
			printf("\n");

		}

	}
	return 0;
}
#endif
#include<stdio.h>
#define X 100
#define Y 100
int temp = 1;
int len = 0;
// 打印矩阵；
void pri(int a[][Y], int len)
{
	int i, j;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}
//输入矩阵；
void scan(int b[][Y], int len)
{
	int m, n;
	//printf("请输入题目中所示图的邻接矩阵A： \n");
	for (m = 0; m < len; m++)
		for (n = 0; n <len; n++)
			scanf("%d", &b[m][n]);
}
//矩阵相加；
void plus(int a[][Y], int b[][Y], int c[][Y], int len)
{
	int d, s;
	for (d = 0; d < len; d++)
		for (s = 0; s <len; s++)
			c[d][s] = a[d][s] + b[d][s];
	pri(c, len);
}
//矩阵相乘
void mul(const int a[][Y], const int b[][Y], int c[][Y], int len)
{
	int i, j, k;
	c[X][Y] = 0;
	for (i = 0; i <len; i++)
		for (j = 0; j < len; j++) {
			c[i][j] = 0;//add
			for (k = 0; k <len; k++)
				//c[i][j] += a[j][k] * b[k][j];//j 错了
				c[i][j] += a[i][k] * b[k][j];
		}
	//printf("长度为%d");
	pri(c, len);
}
//矩阵相减
void subtract(int a[][Y], int b[][Y], int c[][Y], int len)
{
	int i, j;
	for (i = 0; i <len; i++)
		for (j = 0; j < len; j++)
			c[i][j] = a[i][j] - b[i][j];
	pri(c, len);
}
void copy(const int in[][Y], int out[][Y], int len)
{
	for (int i = 0; i <len; i++)
		for (int j = 0; j <len; j++)
			out[i][j] = in[i][j];
}
void Tlhl(int a[][Y], int len)
{

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i <len; i++)
	{
		for (int j = 0; j <len; j++)
		{
			sum1 += a[i][j];
			if (j == i)
				sum2 += a[i][j];
		}
	}
	printf("长度为%d的通路有：%d条\n", temp, sum1);
	printf("回路有：%d条\n", sum2);
}
//矩阵求阶乘(A^1~A^4);
void Fact(int a[][Y], int c[][Y], int len)
{
	int i, j, k, x;
	int sum1 = 0, sum2 = 0;
	int d[X][Y] = { 0 };
	int b[X][Y] = { 0 };
	printf("请输入题中图的邻接矩阵A：\n");
	scan(a, len);
	copy(a, d, len);//将a复制给d
	printf("输出第 %d次 的A阶乘：   \n", temp);
	{
		pri(a, len);

		Tlhl(a, len);
		temp++;
	}
	for (x = 0; x < len; x++)
	{
		printf("输出第 %d次 的A阶乘：   \n", temp);

		mul(a, d, c, len);//输入a d  输出 c
		Tlhl(c, len);
		copy(c, d, len);//将c复制给d 用于参与下一轮循环
		temp++;
		//pri(c);

	}
}
int main()
{
	int a[X][Y] = { 0 };// { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int m = 1, n = 1, o, p;
	//int a[X][Y];
	int b[X][Y] = { 0 }, c[X][Y] = { 0 }, d[X][Y] = { 0 };
	while (m == 1)
	{
		printf("请输入：1--表示求矩阵的加 减 乘运算  2--表示求矩阵阶乘\n");
		scanf("%d", &p);

		if (p == 1)
		{
			printf("请输入要求邻接矩阵的阶数：\n");
			scanf("%d", &len);
			printf(" 请输入矩阵A：\n");
			scan(a, len);
			printf(" 请输入矩阵B：\n");
			scan(b, len);
			printf("请输入矩阵的运算类型：1---矩阵相加  2---矩阵相减  3---矩阵相乘\n");
			scanf("%d", &o);
			if (o == 1)   plus(a, b, c, len);
			if (o == 2)  subtract(a, b, c, len);
			if (o == 3)  mul(a, b, c, len);
			printf("请输入1表示继续运算，2表示退出运算\n");
			scanf("%d", &m);
			printf("\n");
		}
		else
		{
			printf("请输入要求邻接矩阵的阶数：\n");
			scanf("%d", &len);
			Fact(a, c, len);
			printf("请输入1表示继续运算，2表示退出运算\n");
			scanf("%d", &m);
			printf("\n");

		}

	}
	return 0;
}
