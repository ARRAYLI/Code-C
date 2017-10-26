#include<stdio.h>
int main(void)
{

	float a = 3, b = 1, c = 4, d = 5;
	printf("四个水渠同时开，需要%.2f天\n", 1 / (1/a + 1/b + 1/c + 1/d));
	return 0;
}