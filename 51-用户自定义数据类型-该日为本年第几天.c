/*����һ���ṹ���������������,��������ڱ������ǵڼ���,ע����������*/
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
	printf("������Ҫ�����������(�����ʽ--��,��,��)\n");
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
	printf("����Ϊ�����еĵ�%d��",day);
} 
