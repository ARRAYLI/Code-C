#include<stdio.h>
#define L 100
void binary_serach(int a[], int key, int len)
{
	int low, mid, high,count=0;
	low = 0, high = len - 1;
	mid = (low + high) / 2;
	while (low < high)   //�����ҷ�Χ��Ϊ0ʱ��
	{
		mid = (low + high) / 2;
		if (a[mid] == key)
		{
			count++;
			printf("���ҳɹ�\n");
			printf("����%d��!  a[%d]=%d\n",count,mid,key);
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
	printf("���������鳤�ȣ�\n");
	scanf("%d",&len);
	printf("������%d������\n",len);
	for (i = 0; i <len; i++)
		scanf("%d",&a[i]);
	printf("������Ҫ���ҵ�Ԫ�أ�\n");
	scanf("%d",&num);
	binary_serach(a,num,len);
//   11 13 18 28 39 56 69 89 98 122
	return 0;
}