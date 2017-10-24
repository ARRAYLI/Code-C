#include<stdio.h>
#include<math.h>
int Binary_Change(int x,int n)    //自定义函数将二进制转换为十进制数；
{
	if (n == 0)
		return 1;                //递归条件结束；
	return x*Binary_Change(x, n - 1);   //递归调用Binary_Change(int x,int n)函数；
	
}
int main(void)
{
	int t;
	int len = 0,i=0;
	char s[33];
	int IP[4] = { 0 };
	printf("请输入IP地址的二进制形式：\n");
	gets(s);
	len = strlen(s);
	for (i = 0; i <8; i++)     //计算0--7位的转换结果；
	{
		if (s[i] == '1')
			IP[0] += Binary_Change(2,7-i);
		
	}
	
	for (i = 8; i < 16; i++)        //计算8--15位的转换结果；
	{
		if (s[i] == '1')
		IP[1] += Binary_Change(2, 15 - i);
	}

	for (i = 16; i < 24; i++)          //计算16--23位的转换结果；
	{
		if (s[i] == '1')
			IP[2] += Binary_Change(2, 23 - i);
	}

	for (i = 24; i <32; i++)        //计算24--31位的转换结果；
	{
		if (s[i] == '1')
			IP[3] += Binary_Change(2, 31- i);
		if (s[i] = '\0')
			break;
	}
	printf("IP:\n");
	printf("%d.%d.%d.%d\n", IP[0], IP[1], IP[2], IP[3]);

	// 1111 1111 1111 1111 1111 1111 0000 0000
	// 11111111111111111111111100000000
	//  255  255  255  255

	return 0;

}