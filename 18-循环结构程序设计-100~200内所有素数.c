#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,a;
	for(i=100;i<=200;i++)
	{
		a=2;
		for(j=2;j<=sqrt(i);j++)
		{	
			if(i%j!=0)
			{
				a=a+1;
			}
		}
		if(a==j)
		{
			printf("%d\n",i);
		}
	}
}
