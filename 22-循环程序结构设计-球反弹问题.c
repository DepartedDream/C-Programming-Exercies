#include <stdio.h>
int main()
{   
    float rise_height=100,fall_height=50,time,height;
	float total_rise_height=0,total_fall_height=0;
	for(time=1;time<=10;time++)
	{
		total_rise_height=total_rise_height+rise_height;
		rise_height=rise_height/2;
		if(time==10)
		{
			total_rise_height=total_rise_height-rise_height;
		}
	}
	for(time=1;time<=10;time++)
	{
		total_fall_height=total_fall_height+fall_height;
		fall_height=fall_height/2;
	}
	height=total_rise_height+total_fall_height;
	printf("10�κ󾭹�%f��\n",height);
	printf("��10�η���%f��\n",rise_height);
}
