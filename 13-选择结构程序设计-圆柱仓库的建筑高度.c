#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,distance;
	printf("���������x,y\n");
	scanf("%d,%d",&x,&y);
	x=abs(x);
	y=abs(y);
	distance=sqrt(pow((x-2),2)+pow((y-2),2));
	if(distance<=1)
		printf("�����߶�Ϊ10");
		else
			printf("�����߶�Ϊ0");	
}
