/*
������һ�ٸ����䣬��1-100���˺š� 
��һ������Ա�����з�����Ŷ�����
�ڶ�������Ա�����б��Ϊ2�ı����ķ������ˡ��෴����
����������Ա�����б����3�ı����ķ������ˡ��෴����
�Դ�����
����100������Ա�������ļ������Ǵ򿪵�
*/
#include<cstdio>
#include<cstring>
#include<iostream>
#include<stdlib.h>
#define MAXN 100+10
using namespace std;
int a[MAXN];
int main()
{
	cout<<"������һ�ٸ����䣬��1-100���˺š�"<<endl<<"��һ������Ա�����з�����Ŷ�����"<<endl<<"�ڶ�������Ա�����б��Ϊ2�ı����ķ������ˡ��෴����"<<endl<<"����������Ա�����б����3�ı����ķ������ˡ��෴����"<<endl<<"�Դ����ƣ�����100������Ա�������ļ������Ǵ򿪵�"<<endl<<endl<<"�� ";
	int n, first=1;
	memset(a,0,sizeof(a));
	for (int i=1;i<=100;++i)
	{
		for (int j=1;j<=100;++j)
		{
			if (j%i==0)
			{
				a[j]=!a[j];
			}			
		}
	}
	for (int i=1;i<=100;++i)
	{
		if (a[i])
		{
			if(first)
			{
				first=0;
			}
			else
			{
				printf(" ");
			}
			printf("%d",i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
