#include<stdio.h>
#include<stdlib.h> 
int n=0,k=1; //定义全局变量 

void Question(float k);

int main()
{
	printf("欢迎进入四则运算小程序！");
	int Qurstions_Number,Serial_Number;
	float YourAnswer,TrueAnswer;
	while(k==1)
	{
	printf("\n请输入您需要计算的题目数量：");
	scanf("%d",&Qurstions_Number) ;
	while(Qurstions_Number>=10)
	{
		printf("\n对不起，您要求的题目数量已经超出题库范围！请重新输入您需要计算的题目数量：");
		scanf("%d",&Qurstions_Number) ;
		while(Qurstions_Number<=0)
		{
			printf("\n对不起，您要求的题目数量非法！请重新输入您需要计算的题目数量：");
			scanf("%d",&Qurstions_Number) ;
		}
	}
	for(Serial_Number=0;Serial_Number<Qurstions_Number;Serial_Number++)
	{
		printf("\n\n请回答第%d题:",Serial_Number+1);
		n=Serial_Number;
		if(n==0)
		{
			printf("123+234=");
			TrueAnswer=357;
		}
		else if(n==1)
		{
			printf("857-520=");
			TrueAnswer=337;
		}
		else if(n==2)
		{
			printf("85*94=");
			TrueAnswer=7990;
		}
		else if(n==3)
		{
			printf("1024/128=");
			TrueAnswer=8;
		}
		else if(n==4)
		{
			printf("(123+234)*8-789=");
			TrueAnswer=2067;
		}
			else if(n==6)
		{
			printf("999/333+222-111=");
			TrueAnswer=114;
		}
		else if(n==7)
		{
			printf("12*125-4*125=");
			TrueAnswer=1000;
		}
		else if(n==8)
		{
			printf("3.14*125-5*24*3.14=");
			TrueAnswer=15.7;
		}
		else if(n==9)
		{
			printf("(111*4+2775/5)/45=");
			TrueAnswer=22.2;
		}
		else if(n==10)
		{
			printf("1000/64x15=");
			TrueAnswer=234.357;
		}
		else
		{
			printf("123+234=");
			TrueAnswer=0;
		}
		//TrueAnswer=Question(Serial_Number);
		scanf("%f",&YourAnswer);
		if(TrueAnswer==YourAnswer)
			printf("\n恭喜你回答正确！");
		else
			printf("\n对不起回答错误，正确答案是：%f",TrueAnswer);
	}
	printf("\n\n您已经回答完所有的问题了，感谢您的使用！"); 
	printf("\n\n是否继续使用本程序：1.是 ;0.否\n请选择："); 
	scanf("%d",&k); 
	while(k!=1&&k!=0) 
	{
		printf("\n(上次输入非法，请重新选择)是否继续使用本程序：1.是 ;0.否"); 
		scanf("%d",&k);
	}
	system("cls"); 
	}
	printf("\n\n本次服务已结束，感谢您的使用！\n\n"); 
}
