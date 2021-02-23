/*
假如我国国民生产总值的年增长率为10%，
计算10年后我国国民生产总值与现在相比增长多少百分比
计算公式为P=(1+r)^n，r为年增长率；n为年数；P为与现在相比的百分比。
*/
#include<math.h>
#include<stdio.h>
int main() 
{
	float r,n,p,P;
    r=0.1;
    p=1+r;
    n=10;
    P=pow(p,n);
    printf("P=%f",P);	
}
