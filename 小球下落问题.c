#include<stdio.h>
int main(void)
{
	//float hight=100,distance = 0.0;
	//int count = 1;
	//distance += hight;
	//while (count < 10)
	//{
	//	count++;
	//	hight /= 2;
	//	distance += 2 * hight;
	//}                           

	int i;
	float hight=100,distance =100;
	for (i = 1; i <= 9; i++)
	{
		hight /= 2;
		distance += 2 * hight;
	}
	printf("总长度是:%f\n",distance);
	printf("第十次弹起的高度为%f\n",hight/2);
	return 0;
}