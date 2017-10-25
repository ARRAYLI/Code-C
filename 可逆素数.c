#include<stdio.h>
#include<math.h>
int IsPrime(int a)
{
	int i;
	for (i = 2; i <= sqrt(a); i++)
		if (a%i==0)
			return 0;
		else
			continue;
	return 1;
}
int main(void)
{

	int i, n1, n2, n3, n4,t,count=0;
	for (i = 1000; i < 10000; i++)
	{
		if (IsPrime(i))
		{
			n1 = i % 10;     //取出个位数字；
			n2 = i / 10 % 10;   //取出十位数字；
			n3 = i / 100 % 10;         //取出百为数字；
			n4 = i / 1000;       //取出千位数字；
			t = n1 * 1000 + n2 * 100 + n3 * 10 + n4 * 1;
			if (IsPrime(t))
			{
				printf("%-6d", i);
				count++;
				if (count % 10 == 0)
					printf("\n");
			}
		}
	}
	puts("\n");
	return 0;
}