#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[4]={"good"},b[4]={"luck"},c[9];
	for(i=0;i<=3;i++)
	{
		c[i]=a[i];	
	}
	for(i=0;i<=3;i++)
	{
		c[i+4]=b[i];
	}
	for(i=0;i<=8;i++)
	{
		printf("%c",c[i]); 
	}
}