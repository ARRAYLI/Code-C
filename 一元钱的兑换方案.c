#include<stdio.h>
int main(void)
{
	int i, j, k;
	for (i = 0; i <= 10; i++)     //一元兑换成一角钱的个数；
		for (j = 0; j <= 5; j++)   //一元钱兑换两角钱的个数；
			for (k = 0; k <= 2; k++)   //一元钱兑换两角钱的个数；
				if (0.1*i + 0.2*j + 0.5*k == 1)
					printf("0.1:%d个    0.2:%d个   0.5:%d个\n",i,j,k);
	return 0;
}