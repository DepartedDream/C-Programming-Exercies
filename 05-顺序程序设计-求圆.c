/*
设圆半径r=1.5,圆柱高h=3,求圆周长,圆面积,圆球表面积,圆球体积,圆柱体积,结果保留两位小数 
*/
#include <stdio.h>
int main()
{
	float r=1.5;
	float h=3;
	float a,b,c,d,e;//圆周长a,圆面积b,圆球表面积c,圆球体积d,圆柱体积e
	a=2*3.14*r;
	b=3.14*r*r;
	c=2*3.14*r*h;
	d=4/3*3.14*r*r;
	e=3.14*r*r*h;
	printf("圆周长为%.2f\n",a);
	printf("圆面积为%.2f\n",b);
	printf("圆球表面积为%.2f\n",c); 
	printf("圆球体积为%.2f\n",d); 
	printf("圆柱体积为%.2f\n",e); 
} 
