#include<stdio.h>
int main(void)
{
	int number, n, j;
   //��ٷ���
	for (number = 1; number < 6; number++)   //��1--5֮�����������٣�
	{
		for (n = 1; n < 4; n++)    //��1--3֮�����������٣�
		{
			//if�ж��Ƿ��������е�������
			if ((6 * n + 4 * number == 26) && (number*(number + n)*(number + 2 * n)*(number + 3 * n))==880)
			{
				printf("����ǣ�\n");
				for (j = 1; j <= 20; j++)
				{
					printf("%3d",number);
					number += n;
					if (j % 5 == 0)    //���ÿ5����һ�У�
						printf("\n");
				}
			}
		}
	}
	return 0;
}
