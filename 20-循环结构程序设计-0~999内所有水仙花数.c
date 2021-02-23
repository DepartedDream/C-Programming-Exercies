#include <stdio.h>
#include <math.h>
int main()
{	
	int c,b,a,number;
	for(number=0;number<=999;number++)
	{	a=number/1%10;
		b=number/10%10;
		c=number/100%10;
		if(number==pow(a,3)+pow(b,3)+pow(c,3))
		{
			printf("%d\n",number);
		}
	}
}
