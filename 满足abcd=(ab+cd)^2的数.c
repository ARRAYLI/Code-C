#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,a,b,c,d;
	for (i = 1000; i < 10000; i++)
	{
		a = i/100;
		b = i /10% 10;
		c = i % 10;
		if (i == pow((a + b * 10 + c), 2))
			printf("%d\t",i);
	}

	return 0;
}