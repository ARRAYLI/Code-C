#include<stdio.h>
#include<math.h>
int IsPrime(int a)
{
	int i;
	for (i = 2; i < sqrt(a); i++)
		if (a%i == 0)
			return 0;
		else
			if (i > sqrt(a) - 1)
				return 1;
}
int main(void)
{
	int i,a,b;
	for (i = 1; i < 1000; i++)
	{
		if (i>10&&i<100&&IsPrime(i))
		{
			a = i % 10;
			b = i / 10;
			if (a == b)
				printf("%-4d",i);
		}
		if ( i > 100 && i < 1000&&IsPrime(i))
		{
			a = i % 10;
			//b = i / 10 % 10;
			b = i / 100;
			if (a ==b)
				printf("%-4d",i);
		}
	}
	return 0;
}