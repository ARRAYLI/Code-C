#include<stdio.h>
int main(void)
{
	int i, j, k;
	for (i = 0; i <= 10; i++)     //һԪ�һ���һ��Ǯ�ĸ�����
		for (j = 0; j <= 5; j++)   //һԪǮ�һ�����Ǯ�ĸ�����
			for (k = 0; k <= 2; k++)   //һԪǮ�һ�����Ǯ�ĸ�����
				if (0.1*i + 0.2*j + 0.5*k == 1)
					printf("0.1:%d��    0.2:%d��   0.5:%d��\n",i,j,k);
	return 0;
}