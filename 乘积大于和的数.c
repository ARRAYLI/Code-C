#include<stdio.h>
int main(void)
{
	int i,a,b, count = 0;
	for (i = 10; i < 100; i++)
	{
		a = i % 10;   //ȡ����λ����
		b = i / 10;   //ȡ��ʮλ����
		if (a*b > a + b)
		{
			printf("%-4d", i);
			count++;
			if (count % 5 == 0)
				printf("\n");
		}
	}
	return 0;
}