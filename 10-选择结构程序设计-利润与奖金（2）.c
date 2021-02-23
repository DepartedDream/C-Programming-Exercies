#include <stdio.h>
int main()
{
	int I,bonus,grade;
	printf("请输入利润\n"); 
	scanf("%d",&I);
	grade=I/100000;
	if(grade>10) grade=11;
	switch(grade)
	{	
	    case 0:bonus=0.1*I;
		case 1:
		case 2:bonus=100000*0.1+(I-100000)*0.075;break;
		case 3:
		case 4:bonus=100000*0.1+100000*0.075+(I-200000)*0.05;break;
		case 5:
		case 6:bonus=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;break;
		case 7:
		case 8:
		case 9:
		case 10:bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;break;
		case 11:bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.01;break;
	}
	printf("应发奖金总数为%d",bonus);
}
