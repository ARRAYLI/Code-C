#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int num1,num2,result,op,max;
	printf("��ѡ������� 1-> +,0-> -\n");
	scanf("%d",&op);
	printf("��������������10000\n");
	scanf("%d", &max);
	srand((unsigned long)time(NULL));
	num1 = rand() % max;
	num2 = rand() % max;
	if (op == 1)
		printf("%d%c%d%c", num1, '+', num2,'=');
		
	else
		printf("%d%c%d%c", num1, '-', num2,'=');
	scanf("%d", &result);
	if ((op == 1 && num1 + num2 == result) || (op == 0 && num1 - num2 == result))
		printf("��������ȷ!\n");
	else
		printf("����������!\n");
	return 0;
}