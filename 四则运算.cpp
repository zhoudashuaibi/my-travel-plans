#include<stdio.h>
#include<stdlib.h> 
int n=0,k=1; //����ȫ�ֱ��� 

void Question(float k);

int main()
{
	printf("��ӭ������������С����");
	int Qurstions_Number,Serial_Number;
	float YourAnswer,TrueAnswer;
	while(k==1)
	{
	printf("\n����������Ҫ�������Ŀ������");
	scanf("%d",&Qurstions_Number) ;
	while(Qurstions_Number>=10)
	{
		printf("\n�Բ�����Ҫ�����Ŀ�����Ѿ�������ⷶΧ����������������Ҫ�������Ŀ������");
		scanf("%d",&Qurstions_Number) ;
		while(Qurstions_Number<=0)
		{
			printf("\n�Բ�����Ҫ�����Ŀ�����Ƿ�����������������Ҫ�������Ŀ������");
			scanf("%d",&Qurstions_Number) ;
		}
	}
	for(Serial_Number=0;Serial_Number<Qurstions_Number;Serial_Number++)
	{
		printf("\n\n��ش��%d��:",Serial_Number+1);
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
			printf("\n��ϲ��ش���ȷ��");
		else
			printf("\n�Բ���ش������ȷ���ǣ�%f",TrueAnswer);
	}
	printf("\n\n���Ѿ��ش������е������ˣ���л����ʹ�ã�"); 
	printf("\n\n�Ƿ����ʹ�ñ�����1.�� ;0.��\n��ѡ��"); 
	scanf("%d",&k); 
	while(k!=1&&k!=0) 
	{
		printf("\n(�ϴ�����Ƿ���������ѡ��)�Ƿ����ʹ�ñ�����1.�� ;0.��"); 
		scanf("%d",&k);
	}
	system("cls"); 
	}
	printf("\n\n���η����ѽ�������л����ʹ�ã�\n\n"); 
}
