/*
宾馆有一百个房间，从1-100编了号。 
第一个服务员把所有房间的门都打开了
第二个服务员把所有编号为2的倍数的房间做了“相反处理”
第三个服务员把所有编号是3的倍数的房间做了“相反处理”
以此类推
当第100个服务员来过后，哪几扇门是打开的
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
	cout<<"宾馆有一百个房间，从1-100编了号。"<<endl<<"第一个服务员把所有房间的门都打开了"<<endl<<"第二个服务员把所有编号为2的倍数的房间做了“相反处理”"<<endl<<"第三个服务员把所有编号是3的倍数的房间做了“相反处理”"<<endl<<"以此类推，当第100个服务员来过后，哪几扇门是打开的"<<endl<<endl<<"答： ";
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
