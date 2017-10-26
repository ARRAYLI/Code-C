#include<stdio.h>
int main(void)
{
	int i, a,b,c,count = 0;
	for (i = 100; i < 1000; i++)
	{
		a = i % 10;  //取出各位；
		b = i / 10 % 10;  //取出十位；
		c = i / 100;    //取百位；
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