#include<stdio.h>
int main(void)
{
	int i, j, k;
	for (i = 1; i <= 3; i++)
		for (j = 1; j <= 3; j++)
			for (k = 1; k <= 3;k++)
				if (i != 1 && k != 1 && k != 3 && i != j&&i != k&&j != k)
				{
					printf("%c 将嫁给 A\n",'X'+i-1);
					printf("%c 将嫁给 B\n", 'X' + j - 1);
					printf("%c 将嫁给 C\n", 'X' + k- 1);
				}
	return 0;
}