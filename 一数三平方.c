#include<stdio.h>
#include<math.h>
int main(void)
{
	long int i, n, n1, n2, n3, n4, count = 0;
	printf("这样的数有：\n");
	for (i = 100000; i <=999999; i++)
	{
		n = (long)sqrt(i);
		if (i == n*n)
		{
			n1 = i/1000;
			n2 = i % 1000;
			n3 = (long)sqrt(n1);
			n4 = (long)sqrt(n2);
			if (n1 == n3*n3&&n2 == n4*n4)
			{
				count++;
				printf("%ld\t",i);
			}
		}
	}
	printf("\n满足条件的有：%d个\n", count);
	printf("");
	puts("");

	return 0;
}