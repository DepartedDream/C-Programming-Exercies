/*
写一个函数days,实现第1题的计算,由主函数将年,月,日传递给days函数,计算后将日子数传回主函数输出 
*/
#include <stdio.h>
int main()
{
	struct time
	{
		int year;
		int month;
		int day;
	};
	struct time Time;
	printf("输入你要换算的年月日(输入格式--年,月,日)\n");
	scanf("%d,%d,%d",&Time.year,&Time.month,&Time.day);
	printf("该日为本年中的第%d天",days(Time.year,Time.month,Time.day));
}
int days(Time_year,Time_month,Time_day)
{
	int i,day=0;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};	
	if(Time_year%4==0)
	{
		month[1]=29;
	}
	for(i=1;i<Time_month;i++)
	{
		day=day+month[i-1];
	}
	day=day+Time_day;
	return day; 
}
