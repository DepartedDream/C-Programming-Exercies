/*定义一个结构体变量包括年月日,计算该日在本年中是第几天,注意闰年问题*/
#include <stdio.h>
int main()
{
	struct time
	{
		int year;
		int month;
		int day;
	};
	int i,day=0;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	struct time Time;
	printf("输入你要换算的年月日(输入格式--年,月,日)\n");
	scanf("%d,%d,%d",&Time.year,&Time.month,&Time.day);
	if(Time.year%4==0)
	{
		month[1]=29;
	}
	for(i=1;i<Time.month;i++)
	{
		day=day+month[i-1];
	}
	day=day+Time.day;
	printf("该日为本年中的第%d天",day);
} 
