#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	int prime_number(int x);
	printf("������һ������:\n"); 
	scanf("%d",&x);
	prime_number(x);
}
int prime_number(int x)
{
	int j,a=2;
	for(j=2;j<=sqrt(x);j++)
	{	
		if(x%j!=0)
		{
			a=a+1;
		}
	}
	if(a==j)
	{
		printf("�����������");
	}
	else
	{
		printf("�������������");
	}
}
