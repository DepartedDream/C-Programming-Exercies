#include <stdio.h>
int main()
{
	int n,i=0;
	for(n=100;n<=200;n++)
	{
		if(n%7==0)
		{
			printf("%d ",n);
			i=i+1;
			if(i%7==0)
			{
				printf("\n");
			}
		}
	}
}
