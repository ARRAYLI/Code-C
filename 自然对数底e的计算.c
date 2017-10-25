#include<stdio.h>
int fac(int a)
{
	int j,t=1;
	for (j = 1; j <=a;j++)
		t*= j;
	return t;
}
int main(void)
{
	int i=1;
	float sum =1,s=0;
	while (1)
	{
		s = 1.0 / (fac(i));
		if (s<(10e-10))
			break;
		sum += s;
		i++;
	}
	printf("e=%f\n",sum);
	return 0;
}