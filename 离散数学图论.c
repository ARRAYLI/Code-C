#include<stdio.h>
#define Length 3
main()
{
	int a[Length][Length];  int m = 0; int i, temp=0, j, k;
	int c[Length][Length] = {0};
	printf("������ͼ����Ӿ��� :\n");
	for (i = 0; i < Length; i++)
		for (j = 0; j <Length; j++)
		{
			scanf_s("%d", &a[i][j]);

		}
	for (i = 0; i < Length; i++)
	{
		for (j = 0; j < Length; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	printf("����ڽӾ���A��\n");
	/*
	for (i = 0; i <Length; i++)
	{
		for (j = 0; j <Length; j++)
		{
			printf("%-3d", a[i][j]);

		}

		printf("\n");
	} */
	printf("�����Ӿ���B��\n");
	for (k = 0; k < Length; k++)
	{
		for (i = 0; i < Length; i++)
		{
			temp = 0;
			for (j = 0; j < Length; j++)
			{
				temp += a[k][j] * a[j][i];



			}
			c[i][j] = temp;
			printf("%3d", c[i][j]);

		}
		printf("\n");
	}
}