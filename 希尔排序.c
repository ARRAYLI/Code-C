#include<stdio.h>
void Insort(int a[],int n)
{
	int i,j;
	for (i = 2; i <= n; i++)
	{
		a[0] = a[i];   //设置a[0]监视哨；
		j = i - 1;     //确定比较元素最左边的元素；
		while (a[0] < a[j])
		{
			a[j + 1] = a[j];   //数据右移；
			j--;               //移向左边一个未比较的元素；
		}
		a[j + 1] = a[0];      //在确定的位置插入a[0];
	}
}
void shsort(int a[],int len)
{
	int i, j, d;
	d = len / 2;
	while (d>=1)
	{
		//直接插入排序；
		for (i = d+1; i <= len; i++)    //数组下标从d+1开始经行直接插入排序；
		{
			a[0] = a[i];     //设置监视哨；
			j = i - d;       //确定要比较元素最右边的位置；
			while (a[0] < a[j])
			{
				a[j + d] = a[j];    //数据右移；
				j = j - d;;       //移向左边一个为比较的数；
			}
			a[j + d] = a[0];   //在确定的位置插入a[i];
		}
		d = d / 2;             //增量变为原来的一半；
	}
}
int main(void)
{
	int i,arr[11];
	printf("请输入10个数据：\n");
	for (i = 1; i < 11; i++)
		scanf("%d",&arr[i]);
	//printf("排完序后的顺序为：\n");
	shsort(arr,10);
	printf("排完序后的顺序为：\n");
	for (i = 1; i < 11; i++)
		printf("%-4d",arr[i]);
	puts("");








	/*	
	20  19  18  17  16  15  14  13  12  11 
    10  9  8  7  6  5  4  3  2  1
	
	*/
	return 0;
}