#include<stdio.h>
int main()
{
	int grade;
	printf("ÇëÊäÈë³É¼¨");
	scanf("%d",&grade);
	if (grade>=90)
	{
		printf("A");
	}
	else if (89>=grade&&grade>=80)
	{
		printf("B");
	}
	else if (79>=grade&&grade>=70)
	{
		printf("C");
	}
	else if (69>=grade&&grade>=60)
	{
		printf("D");
	}
	else if (60>grade)
	{
		printf("E");
	}
}		
