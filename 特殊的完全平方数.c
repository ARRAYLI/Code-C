#include<stdio.h>
#include<math.h>
int main(void)
{
	int i, j, t1, t2, t3;
	for (i = 100; i < 1000; i++)
	{
		for (j = 1; j <= sqrt(i); j++)
		{
			if (i == j*j)
			{

				t1 = i % 10;
				t2 = i / 10 % 10;
				t3 = i / 100;
				if (t1 == t2||t1==t3||t2==t3)
					printf("%-4d",i);
			}
		}
	}
	puts("");










	return 0;
}