#include<stdio.h>
int main(void)
{
	int day,x1=0,x2=1;

	for (day =9; day > 0; day--)
	{
		x1 = 2 * (x2 + 1);
		x2 = x1;
	}
	printf("һ����%-6d����\n",x1);
	return 0;
}