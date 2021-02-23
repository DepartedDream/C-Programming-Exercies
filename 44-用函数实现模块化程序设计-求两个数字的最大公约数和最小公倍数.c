#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,Gcd=0,Lcm=0;
	int gcd(int x,int y);
	int lcm(int x,int y);
	printf("请输入两个整数:\n");
	scanf("%d%d",&x,&y);
	Gcd=gcd(x,y);
	Lcm=lcm(x,y);
	printf("这两个整数的最大公约数为%d\n这两个整数的最小公倍数为%d\n",Gcd,Lcm);
}
int gcd(int x,int y)
{
	if(x%y==0)
	{
		return y;
	}
	return gcd(y,x%y);
}
int lcm(int x,int y)
{
	int z;
	z=x*y/gcd(x,y);
	return z;
}
