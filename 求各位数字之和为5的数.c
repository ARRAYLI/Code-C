#include<stdio.h>
int main(void)
{
	int i, a,b,c,count = 0;
	for (i = 100; i < 1000; i++)
	{
		a = i % 10;  //ȡ����λ��
		b = i / 10 % 10;  //ȡ��ʮλ��
		c = i / 100;    //ȡ��λ��
		if (a + b + c == 5)
		{
			printf("%-4d", i);
			count++;
			if (count % 5 == 0)
				printf("\n");
		}
	}
	return 0;
}