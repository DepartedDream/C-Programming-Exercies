#include <stdio.h>
int main()
{
	int amount1,amount=0,day;
	for(;amount<=99999;amount++)
	{
		amount1=amount;
		for(day=1;day<10;day++)
		{
			amount=amount/2-1;
		}
		if(amount==1)
		{
			printf("%d",amount1);
			break;
		}
		else 
		{
			amount=amount1;
		}
	}
}
