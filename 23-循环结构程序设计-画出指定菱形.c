#include <stdio.h>
#include <math.h>
int main()
{
	int a,x,row;
	printf("ÊäÈë¾ØÕóĞĞÊı\n");
	scanf("%d",&row);
	for(x=row-1/2;-(row-1/2)<=x&&x<=row-1/2;x--)
	{
		for(a=1;a<=fabs(x);a++)
		{
			printf(" ");
		}
		for(a=1;a<=row-2*fabs(x);a++)
		{
			printf("*");
		}
		for(a=1;a<=fabs(x);a++)
		{
			printf(" ");
		}
		printf("\n");
	}
	system ("pause");
}
