#include<stdio.h>
#include<math.h>
int Binary_Change(int x,int n)    //�Զ��庯����������ת��Ϊʮ��������
{
	if (n == 0)
		return 1;                //�ݹ�����������
	return x*Binary_Change(x, n - 1);   //�ݹ����Binary_Change(int x,int n)������
	
}
int main(void)
{
	int t;
	int len = 0,i=0;
	char s[33];
	int IP[4] = { 0 };
	printf("������IP��ַ�Ķ�������ʽ��\n");
	gets(s);
	len = strlen(s);
	for (i = 0; i <8; i++)     //����0--7λ��ת�������
	{
		if (s[i] == '1')
			IP[0] += Binary_Change(2,7-i);
		
	}
	
	for (i = 8; i < 16; i++)        //����8--15λ��ת�������
	{
		if (s[i] == '1')
		IP[1] += Binary_Change(2, 15 - i);
	}

	for (i = 16; i < 24; i++)          //����16--23λ��ת�������
	{
		if (s[i] == '1')
			IP[2] += Binary_Change(2, 23 - i);
	}

	for (i = 24; i <32; i++)        //����24--31λ��ת�������
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