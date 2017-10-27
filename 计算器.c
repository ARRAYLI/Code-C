#include<stdio.h>
#include<windows.h>
#include<math.h>
float sum = 0;  //定义全局变量，可以求出每次运算后的结果；
int count = 0;  //定义去全局变量计算所有操作的次数；
//加法运算；
void Add()
{
	float num1=0, num2=0;
	float temp = 0;  //用来记录上一次计算后的值；
	printf("请输入要进行运算的数字：\n");
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

//减法运算；
void Subtraction()
{
    float num1 = 0, num2 = 0;
	float temp = 0;  //用来记录上一次计算后的值；
	printf("请输入要进行运算的数字：\n");
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

//乘法运算；
void multiplication()
{
	float num1 = 0, num2 = 0;
	float temp = 0;  //用来记录上一次计算后的值；
	printf("请输入要进行运算的数字：\n");
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

//除法运算；
void division()
{
    float num1 = 0, num2 = 0;
	float temp = 0;  //用来记录上一次计算后的值；
	printf("请输入要进行运算的数字：\n");
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
			printf("您的输入有错误，请重新输入！\n");
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
			printf("您的输入有错误，请重新输入！\n");
		}
	}
}

//阶乘运算；
void fac()
{
	int num1 = 0, num2 = 0;
	int temp = 1;  //用来记录上一次计算后的值；
	if (count == 0)
	{
		printf("请输入要进行运算的数字：\n");
		scanf("%d", &num1);
		if (num1== 0||num1==1)
		{
			temp = 1;
			printf("%d!=%d\n",num1,temp);
		}
		else if(num1<0)
		{
			printf("您的输入有错误！\n");
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
			printf("您的输入有错误！\n");
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

//乘方运算;
void ChengFang()
{
	float num1 = 0, num2 = 0;
	float temp = 0;  //用来记录上一次计算后的值；
	printf("请输入要进行运算的数字：\n");
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

//求余运算
void Mod()
{
	float num1 = 0, num2 = 0;
	float temp = 0;  //用来记录上一次计算后的值；
	printf("请输入要进行运算的数字：\n");
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
	int menu = 0;   //主菜单；
	int menuchlid = 0;  //子菜单：加，减，乘，除；
	int flag = 1;  //用来判断是否子再次进行运算；
	char ch;    //接收Y/N;
	while (flag)
	{
		printf("\n\n\t\t请选择要进行的运算操作：\n");
		printf("\n\t\t\t\t\t1---加、减、乘、除\n");
		printf("\n\t\t\t\t\t2---阶乘\n");
		printf("\n\t\t\t\t\t3---乘方\n");
		printf("\n\t\t\t\t\t4---求余\n");
		printf("\n\t\t\t\t\t5---退出\n");
		printf("请输入你要选择的操作：\n");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1:
		{
			int flag = 1;  //用来判断是否子再次进行运算；
			while (flag)
			{
				printf("\n\n\t\t请选择要进行的运算操作：\n");
				printf("\n\t\t\t\t\t1---加法\n");
				printf("\n\t\t\t\t\t2---减法\n");
				printf("\n\t\t\t\t\t3---乘法\n");
				printf("\n\t\t\t\t\t4---除法\n");
				printf("\n\t\t\t\t\t5---返回到上一级菜单\n");
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
				printf("请问是否继续进行运算Y/y--是，N/n--否\n");
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
		printf("请问是否继续进行运算Y/y--是，N/n--否\n");
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