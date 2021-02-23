#include <stdio.h>
#include <math.h>
int main()
{   
	float a,b,c;
	printf("根据ax^2+bx+c=0,分别输入a,b,c的值\n");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a=0){
	printf("不是二次方程，而是一次方程");}
		else if(pow(b,2)-4*a*c==0){
		printf("有两个等的实根");}
			else if(pow(b,2)-4*a*c>0){
			printf("有两个不等的实根");}
				else if(pow(b,2)-4*a*c<0){
				printf("有两个共轭复根");} 		
}	
