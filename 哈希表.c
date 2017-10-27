
#include<stdio.h>
#include<time.h>           //time�õ���ͷ�ļ�
#include<stdlib.h>
#include<ctype.h>
#include<string.h>         //��������ʱ�Ƚ��õ�ͷ�ļ�
#define HASH_LEN 50                      //��ϣ��ĳ���        
#define P 47                            //С�ڹ�ϣ���ȵ�P
#define NAME_LEN 30                      //������ĳ��� 
typedef struct   //������
{
	char *py;    //���ֵ�ƴ��
	int m;       //ƴ������Ӧ��    
}NAME;
NAME NameTable[HASH_LEN];        //ȫ�ֶ���������

typedef struct    //��ϣ��
{
	char *py;   //���ֵ�ƴ��
	int m;      //ƴ������Ӧ��ASCII�ܺ�
	int si;     //���ҳ���
}HASH;
HASH HashTable[HASH_LEN];        //ȫ�ֶ����ϣ��

int d[30], i, j;    //ȫ�ֶ��������,ѭ���õ�i��j

void InitNameTable() //������ĳ�ʼ��         
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
void CreateHashTable() //������ϣ��  
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
		int adr = (NameTable[i].m) % P;  //���������� H(key)=key MOD p,p<=m
		if (HashTable[adr].si == 0)     //�������ͻ����������ֵ����ϣ��  
		{
			HashTable[adr].m = NameTable[i].m;
			HashTable[adr].py = NameTable[i].py;
			HashTable[adr].si = 1;
		}
		else                         //�����ͻ 
		{
			while (HashTable[adr].si != 0)
			{
				adr = (adr + d[j++]) % HASH_LEN;   //α���̽����ɢ�з������ͻ  
				sum = sum + 1;                //���Ҵ�����1
			}
			HashTable[adr].m = NameTable[i].m;  //���������Ƹ���ϣ���Ӧ��λ����
			HashTable[adr].py = NameTable[i].py;
			HashTable[adr].si = sum;
		}
	}
}

void DisplayNameTable() //��ʾ������
{
	printf("\n��ַ \t\t ���� \t\t �ؼ���\n");
	for (i = 0; i<NAME_LEN; i++)
		printf("%2d %18s \t\t  %d  \n", i, NameTable[i].py, NameTable[i].m);
}

void DisplayHashTable() // ��ʾ��ϣ��      
{
	float asl = 0.0;
	printf("\n\n ��ַ \t\t ���� \t\t �ؼ��� \t ��������\n"); //��ʾ�ĸ�ʽ
	for (i = 0; i<NAME_LEN; i++)
	{
		printf("%2d %18s \t\t  %d \t\t  %d\n", i, HashTable[i].py, HashTable[i].m, HashTable[i].si);
		asl += HashTable[i].si;
	}
	asl /= NAME_LEN;                        //���ASL
	printf("\n\nƽ�����ҳ��ȣ�ASL(%d)=%f \n", NAME_LEN, asl);
}

void FindName() //����   
{
	char name[20] = { 0 };
	int s = 0, sum = 1, adr;
	printf("\n��������Ҫ���ҵ�������ƴ��:");
	scanf("%s", name);
	for (j = 0; j<20; j++)   //���������ƴ������Ӧ��ASCII��Ϊ�ؼ���
		s += toascii(name[j]);
	adr = s%P;                         //����������
	j = 0;
	if (HashTable[adr].m == s&&!strcmp(HashTable[adr].py, name))          //��3����������жϣ���������ҽ��
		printf("\n����:%s   �ؼ���:%d   ���ҳ���Ϊ: 1\n", HashTable[adr].py, s);
	else if (HashTable[adr].m == 0)
		printf("û����Ҫ���ҵ���!\n");
	else
	{
		while (1)
		{
			adr = (adr + d[j++]) % HASH_LEN;       //α���̽����ɢ�з������ͻ                    
			sum = sum + 1;                        //���Ҵ�����1
			if (HashTable[adr].m == 0)
			{
				printf("û����Ҫ���ҵ���!\n");
				break;
			}
			if (HashTable[adr].m == s&&!strcmp(HashTable[adr].py, name))
			{
				printf("\n����:%s   �ؼ���:%d   ���ҳ���Ϊ:%d\n", HashTable[adr].py, s, sum);
				break;
			}
		}
	}
}

void main()              //������
{
	char a;
	srand((int)time(0));
	for (i = 0; i<30; i++)                 //������������α�������d[i]����1��50֮�䣩
		d[i] = 1 + (int)(HASH_LEN*rand() / (RAND_MAX + 1.0));
	InitNameTable();
	CreateHashTable();
	puts("                          ��ϣ�����");//��ʾ�˵���
	puts("\n*----------------------------�˵���------------------------------*");
	puts(" \t\t\t 1. ��ʾ������");
	puts(" \t\t\t 2. ��ʾ��ϣ��");
	puts(" \t\t\t 3. ����");
	puts(" \t\t\t 4. �˳�                   laycher.cn��Ʒ");
	puts("*----------------------------------------------------------------*");

	printf("\n\t��ѡ��:");
	scanf("%s", &a);
	switch (a)            //����ѡ������жϣ�ֱ��ѡ���˳�ʱ�ſ����˳�
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
		printf("\n��������ȷ��ѡ��!\n");

	}

}
