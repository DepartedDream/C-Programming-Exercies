#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	int prime_number(int x);
	printf("请输入一个数字:\n"); 
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
		printf("这个数是素数");
	}
	else
	{
		printf("这个数不是素数");
	}
}
