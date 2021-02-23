#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,distance;
	printf("输入点坐标x,y\n");
	scanf("%d,%d",&x,&y);
	x=abs(x);
	y=abs(y);
	distance=sqrt(pow((x-2),2)+pow((y-2),2));
	if(distance<=1)
		printf("建筑高度为10");
		else
			printf("建筑高度为0");	
}
