#include <stdio.h>
int main()
{
	int I,bonus;
	printf("请输入利润\n"); 
	scanf("%d",&I);
	if(I<=100000){
		bonus=0.1*I;}
		else if(100000<I&&I<=200000){
		bonus=100000*0.1+(I-100000)*0.075;}
			else if(200000<I&&I<=400000){
			bonus=100000*0.1+100000*0.075+(I-200000)*0.05;}
				else if(400000<I&&I<=600000){
				bonus=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;}
					else if(600000<I&&I<=1000000){
					bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;}
						else if(1000000<I){
						bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.01;}
	printf("应发奖金总数为%d",bonus);			
}
