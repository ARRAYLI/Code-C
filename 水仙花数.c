#include<stdio.h>
int main(void)
{
	int i, j, k,t;
	for (i = 100; i < 1000; i++)
	{
		j = i % 10;
		k = i / 10 % 10;
		t = i / 100;
		if (i == j*j*j + k*k *k+ t*t*t)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}