#include <stdio.h>
int main()
{
	int i,j,k;
	char a[5]={"*****"};
	for(j=1;j<=5;j++)
	{
		for(i=0;i<=j;i++)
		{
			printf(" ");
		}
		for(k=0;k<=4;k++)
		{
			printf("%c",a[k]);
		}
		printf("\n");
	}
}
