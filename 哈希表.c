
#include<stdio.h>
#include<time.h>           //time用到的头文件
#include<stdlib.h>
#include<ctype.h>
#include<string.h>         //查找姓名时比较用的头文件
#define HASH_LEN 50                      //哈希表的长度        
#define P 47                            //小于哈希表长度的P
#define NAME_LEN 30                      //姓名表的长度 
typedef struct   //姓名表
{
	char *py;    //名字的拼音
	int m;       //拼音所对应的    
}NAME;
NAME NameTable[HASH_LEN];        //全局定义姓名表

typedef struct    //哈希表
{
	char *py;   //名字的拼音
	int m;      //拼音所对应的ASCII总和
	int si;     //查找长度
}HASH;
HASH HashTable[HASH_LEN];        //全局定义哈希表

int d[30], i, j;    //全局定义随机数,循环用的i、j

void InitNameTable() //姓名表的初始化         
{
	NameTable[0].py = "louyuhong";
	NameTable[1].py = "shenyinghong";
	NameTable[2].py = "wangqi";
	NameTable[3].py = "zhuxiaotong";
	NameTable[4].py = "zhataotao";
	NameTable[5].py = "chenbinjie";
	NameTable[6].py = "chenchaoqun";
	NameTable[7].py = "chencheng";
	NameTable[8].py = "chenjie";
	NameTable[9].py = "chenweida";
	NameTable[10].py = "shanjianfeng";
	NameTable[11].py = "fangyixin";
	NameTable[12].py = "houfeng";
	NameTable[13].py = "hujiaming";
	NameTable[14].py = "huangjiaju";
	NameTable[15].py = "huanqingsong";
	NameTable[16].py = "jianghe";
	NameTable[17].py = "jinleicheng";
	NameTable[18].py = "libiao";
	NameTable[19].py = "liqi";
	NameTable[20].py = "lirenhua";
	NameTable[21].py = "liukai";
	NameTable[22].py = "louhanglin";
	NameTable[23].py = "luchaoming";
	NameTable[24].py = "luqiuwei";
	NameTable[25].py = "panhaijian";
	NameTable[26].py = "shuxiang";
	NameTable[27].py = "suxiaolei";
	NameTable[28].py = "sunyubo";
	NameTable[29].py = "wangwei";
	for (i = 0; i < NAME_LEN; i++)
	{
		int s = 0;
		char *p = NameTable[i].py;
		for (j = 0; *(p + j) != '\0'; j++)
			s += toascii(*(p + j));
		NameTable[i].m = s;
	}
}
void CreateHashTable() //建立哈希表  
{
	for (i = 0; i<NAME_LEN; i++)
	{
		HashTable[i].py = "\0";
		HashTable[i].m = 0;
		HashTable[i].si = 0;
	}
	for (i = 0; i<NAME_LEN; i++)
	{
		int sum = 1, j = 0;
		int adr = (NameTable[i].m) % P;  //除留余数法 H(key)=key MOD p,p<=m
		if (HashTable[adr].si == 0)     //如果不冲突，将姓名表赋值给哈希表  
		{
			HashTable[adr].m = NameTable[i].m;
			HashTable[adr].py = NameTable[i].py;
			HashTable[adr].si = 1;
		}
		else                         //如果冲突 
		{
			while (HashTable[adr].si != 0)
			{
				adr = (adr + d[j++]) % HASH_LEN;   //伪随机探测再散列法处理冲突  
				sum = sum + 1;                //查找次数加1
			}
			HashTable[adr].m = NameTable[i].m;  //将姓名表复制给哈希表对应的位置上
			HashTable[adr].py = NameTable[i].py;
			HashTable[adr].si = sum;
		}
	}
}

void DisplayNameTable() //显示姓名表
{
	printf("\n地址 \t\t 姓名 \t\t 关键字\n");
	for (i = 0; i<NAME_LEN; i++)
		printf("%2d %18s \t\t  %d  \n", i, NameTable[i].py, NameTable[i].m);
}

void DisplayHashTable() // 显示哈希表      
{
	float asl = 0.0;
	printf("\n\n 地址 \t\t 姓名 \t\t 关键字 \t 搜索长度\n"); //显示的格式
	for (i = 0; i<NAME_LEN; i++)
	{
		printf("%2d %18s \t\t  %d \t\t  %d\n", i, HashTable[i].py, HashTable[i].m, HashTable[i].si);
		asl += HashTable[i].si;
	}
	asl /= NAME_LEN;                        //求得ASL
	printf("\n\n平均查找长度：ASL(%d)=%f \n", NAME_LEN, asl);
}

void FindName() //查找   
{
	char name[20] = { 0 };
	int s = 0, sum = 1, adr;
	printf("\n请输入想要查找的姓名的拼音:");
	scanf("%s", name);
	for (j = 0; j<20; j++)   //求出姓名的拼音所对应的ASCII作为关键字
		s += toascii(name[j]);
	adr = s%P;                         //除留余数法
	j = 0;
	if (HashTable[adr].m == s&&!strcmp(HashTable[adr].py, name))          //分3种情况进行判断，并输出超找结果
		printf("\n姓名:%s   关键字:%d   查找长度为: 1\n", HashTable[adr].py, s);
	else if (HashTable[adr].m == 0)
		printf("没有想要查找的人!\n");
	else
	{
		while (1)
		{
			adr = (adr + d[j++]) % HASH_LEN;       //伪随机探测再散列法处理冲突                    
			sum = sum + 1;                        //查找次数加1
			if (HashTable[adr].m == 0)
			{
				printf("没有想要查找的人!\n");
				break;
			}
			if (HashTable[adr].m == s&&!strcmp(HashTable[adr].py, name))
			{
				printf("\n姓名:%s   关键字:%d   查找长度为:%d\n", HashTable[adr].py, s, sum);
				break;
			}
		}
	}
}

void main()              //主函数
{
	char a;
	srand((int)time(0));
	for (i = 0; i<30; i++)                 //用随机函数求得伪随机数列d[i]（在1到50之间）
		d[i] = 1 + (int)(HASH_LEN*rand() / (RAND_MAX + 1.0));
	InitNameTable();
	CreateHashTable();
	puts("                          哈希表设计");//显示菜单栏
	puts("\n*----------------------------菜单栏------------------------------*");
	puts(" \t\t\t 1. 显示姓名表");
	puts(" \t\t\t 2. 显示哈希表");
	puts(" \t\t\t 3. 查找");
	puts(" \t\t\t 4. 退出                   laycher.cn出品");
	puts("*----------------------------------------------------------------*");

	printf("\n\t请选择:");
	scanf("%s", &a);
	switch (a)            //根据选择进行判断，直到选择退出时才可以退出
	{
	case '1':
		DisplayNameTable();
		break;
	case '2':
		DisplayHashTable();
		break;
	case '3':
		FindName();
		break;
	case '4':
		exit(0);
		break;
	default:
		printf("\n请输入正确的选择!\n");

	}

}
