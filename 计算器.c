#include<stdio.h>
#include<windows.h>
#include<math.h>
float sum = 0;  //����ȫ�ֱ������������ÿ�������Ľ����
int count = 0;  //����ȥȫ�ֱ����������в����Ĵ�����
//�ӷ����㣻
void Add()
{
	float num1=0, num2=0;
	float temp = 0;  //������¼��һ�μ�����ֵ��
	printf("������Ҫ������������֣�\n");
	if (count == 0)
	{
		scanf("%f%f", &num1, &num2);
		sum = num1 + num2;
		printf("%f+%f=%f\n", num1, num2, sum);
	}
	else
	{
		scanf("%f",&num1);
		temp = sum;
		sum = temp+num1;
		printf("%f+%f=%f\n", temp,num1,sum);
	}
}

//�������㣻
void Subtraction()
{
    float num1 = 0, num2 = 0;
	float temp = 0;  //������¼��һ�μ�����ֵ��
	printf("������Ҫ������������֣�\n");
	if (count == 0)
	{
		scanf("%f%f", &num1, &num2);
		sum = num1- num2;
		printf("%f-%f=%f\n", num1, num2, sum);
	}
	else
	{
		scanf("%f", &num1);
		temp = sum;
		sum =temp- num1;
		printf("%f-%f=%f\n",temp, num1,sum);
	}
}

//�˷����㣻
void multiplication()
{
	float num1 = 0, num2 = 0;
	float temp = 0;  //������¼��һ�μ�����ֵ��
	printf("������Ҫ������������֣�\n");
	if (count == 0)
	{
		scanf("%f%f", &num1, &num2);
		sum = num1*num2;
		printf("%f*%f=%f\n", num1, num2, sum);
	}
	else
	{
		scanf("%f", &num1);
		temp = sum;
		sum= temp*num1;
		printf("%f*%f=%f\n",temp, num1,sum);
	}
}

//�������㣻
void division()
{
    float num1 = 0, num2 = 0;
	float temp = 0;  //������¼��һ�μ�����ֵ��
	printf("������Ҫ������������֣�\n");
	if (count == 0)
	{
		scanf("%f%f", &num1, &num2);
		if (num2 != 0)
		{
			sum = num1 / num2;
			printf("%f/%f=%f\n", num1, num2, sum);
		}
		else
		{
			printf("���������д������������룡\n");
			exit(0);
		}
	}
	else
	{
		scanf("%f", &num1);
		if (num1 != 0)
		{
			temp = sum;
			sum = temp/num1;
			printf("%f/%f=%f\n", temp, num1, sum);
		}
		else
		{
			printf("���������д������������룡\n");
		}
	}
}

//�׳����㣻
void fac()
{
	int num1 = 0, num2 = 0;
	int temp = 1;  //������¼��һ�μ�����ֵ��
	if (count == 0)
	{
		printf("������Ҫ������������֣�\n");
		scanf("%d", &num1);
		if (num1== 0||num1==1)
		{
			temp = 1;
			printf("%d!=%d\n",num1,temp);
		}
		else if(num1<0)
		{
			printf("���������д���\n");
			exit(0);
		}
		else
		{
			int i=1;
			while (i <=num1)
			{
				temp *= i;
				i++;
			}
			sum = temp;
			printf("%d!=%d\n", num1,(int)sum);
		}
	}
	else
	{
		if ((int)sum == 0 ||(int)sum == 1)
		{
			temp = 1;
			printf("%d!=%d\n", (int)sum, temp);
		}
		else if (((int)sum<0))
		{
			printf("���������д���\n");
			exit(0);
		}
		else
		{
			int i = 1;
			while (i <=((int)sum))
			{
				temp *= i;
				i++;
			}
			printf("%d!=%d\n",(int)sum, temp);
		}
		sum = temp;
	}
}

//�˷�����;
void ChengFang()
{
	float num1 = 0, num2 = 0;
	float temp = 0;  //������¼��һ�μ�����ֵ��
	printf("������Ҫ������������֣�\n");
	if (count == 0)
	{
		scanf("%f%f", &num1, &num2);
		sum = pow(num1, num2);
		printf("%f^%f=%f\n", num1, num2, sum);
	}
	else
	{
		scanf("%f", &num1);
		temp = sum;
		sum = pow(temp, num1);
		printf("%f^%f=%f\n", temp, num1, sum);
	}
}

//��������
void Mod()
{
	float num1 = 0, num2 = 0;
	float temp = 0;  //������¼��һ�μ�����ֵ��
	printf("������Ҫ������������֣�\n");
	if (count == 0)
	{
		scanf("%f%f", &num1, &num2);
		sum =(int)num1%((int)num2);
		printf("%f%%%f=%d\n", num1, num2,(int)sum);
	}
	else
	{
		scanf("%f", &num1);
		temp = sum;
		sum= ((int)temp )%((int)num1);
		printf("%f%%%f=%d\n", temp, num1, (int)sum);
	}

}
void Interface()
{
	int menu = 0;   //���˵���
	int menuchlid = 0;  //�Ӳ˵����ӣ������ˣ�����
	int flag = 1;  //�����ж��Ƿ����ٴν������㣻
	char ch;    //����Y/N;
	while (flag)
	{
		printf("\n\n\t\t��ѡ��Ҫ���е����������\n");
		printf("\n\t\t\t\t\t1---�ӡ������ˡ���\n");
		printf("\n\t\t\t\t\t2---�׳�\n");
		printf("\n\t\t\t\t\t3---�˷�\n");
		printf("\n\t\t\t\t\t4---����\n");
		printf("\n\t\t\t\t\t5---�˳�\n");
		printf("��������Ҫѡ��Ĳ�����\n");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1:
		{
			int flag = 1;  //�����ж��Ƿ����ٴν������㣻
			while (flag)
			{
				printf("\n\n\t\t��ѡ��Ҫ���е����������\n");
				printf("\n\t\t\t\t\t1---�ӷ�\n");
				printf("\n\t\t\t\t\t2---����\n");
				printf("\n\t\t\t\t\t3---�˷�\n");
				printf("\n\t\t\t\t\t4---����\n");
				printf("\n\t\t\t\t\t5---���ص���һ���˵�\n");
				scanf("%d", &menuchlid);
				switch (menuchlid)
				{
				case 1:
					Add();
					count++;
					break;
				case 2:
					Subtraction();
					count++;
					break;
				case 3:
					multiplication();
					count++;
					break;
				case 4:
					division();
					count++;
					break;
				case 5:
					break;
				default:
					break;
				}
				printf("�����Ƿ������������Y/y--�ǣ�N/n--��\n");
				getchar();
				ch = getchar();
				if (ch == 'Y' || ch == 'y')
				{
					flag = 1;
				}
				else
				{
					flag = 0;
				}
			}
		};
		break;
		case 2:
			fac();
			count++;
			break;
		case 3:
			ChengFang();
			count++;
			break;
		case 4:
			Mod();
			count++;
			break;
		case 5:
			exit(0);
			break;
		default:
			break;
		}
		printf("�����Ƿ������������Y/y--�ǣ�N/n--��\n");
		getchar();
		ch = getchar();
		if (ch == 'Y' || ch == 'y')
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
}
int main(void)
{
	Interface();
	return 0;
}