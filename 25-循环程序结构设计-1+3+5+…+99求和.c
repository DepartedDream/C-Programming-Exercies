#include <stdio.h>
int main()
{	
	int sum,n;
	for(n=1;n<=99;n++)
	{	
		if(n%2!=0)
		{
			sum=sum+n; 
		}
	}
	printf("1+3+5+��+99=%d",sum);
}
