#include<stdio.h>
#define L 100
int main(void)
{
	int a[30],i;
	a[0] = a[1] = 1;
	for (i = 2; i < 30; i++)
		a[i] = a[i - 1] + a[i - 2];
	for (i = 0; i < 30; i++)
	{
		printf("%-10d", a[i]);
		if (i % 4 == 0)
			puts("");
	}
	puts("");
	return 0;
}