#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,Gcd=0,Lcm=0;
	int gcd(int x,int y);
	int lcm(int x,int y);
	printf("��������������:\n");
	scanf("%d%d",&x,&y);
	Gcd=gcd(x,y);
	Lcm=lcm(x,y);
	printf("���������������Լ��Ϊ%d\n��������������С������Ϊ%d\n",Gcd,Lcm);
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
