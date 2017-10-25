#include<stdio.h>
int main(void)
{
	int x,i;
	for (i = 1;i<1000; i++)
	{
		if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0)
		{
			printf("¹²ÓÐ£º%d¸ö½×ÌÝ\n",i);
		}
	}
	return 0;
}