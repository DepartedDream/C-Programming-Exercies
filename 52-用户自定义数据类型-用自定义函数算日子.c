/*
дһ������days,ʵ�ֵ�1��ļ���,������������,��,�մ��ݸ�days����,������������������������ 
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
	printf("������Ҫ�����������(�����ʽ--��,��,��)\n");
	scanf("%d,%d,%d",&Time.year,&Time.month,&Time.day);
	printf("����Ϊ�����еĵ�%d��",days(Time.year,Time.month,Time.day));
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
