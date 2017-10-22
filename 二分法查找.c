#include<stdio.h>
#define L 100
void binary_serach(int a[], int key, int len)
{
	int low, mid, high,count=0;
	low = 0, high = len - 1;
	mid = (low + high) / 2;
	while (low < high)   //当查找范围不为0时；
	{
		mid = (low + high) / 2;
		if (a[mid] == key)
		{
			count++;
			printf("查找成功\n");
			printf("查找%d次!  a[%d]=%d\n",count,mid,key);
			break;
		}
		else if (a[mid] < key)
		{
			low = mid + 1;
			count++;
		}
		else
		{
			high = mid - 1;
			count++;
		}
	}
}
int main(void)
{
	int a[L],i,num,len;
	printf("请输入数组长度：\n");
	scanf("%d",&len);
	printf("请输入%d个数：\n",len);
	for (i = 0; i <len; i++)
		scanf("%d",&a[i]);
	printf("请输入要查找的元素：\n");
	scanf("%d",&num);
	binary_serach(a,num,len);
//   11 13 18 28 39 56 69 89 98 122
	return 0;
}