#include <stdio.h>
int main()
{
	float score[5][4],ave[5],medium=0,sum;
	int i,j;
	printf("请依次输入每个同学的成绩(五名同学四门课)(最多读取小数点后两位):\n");
	for(i=0;i<=4;i++)
	{
		sum=0;
		ave[i]=0;
		for(j=0;j<=3;j++)
		{
			scanf("%f",&score[i][j]);
			sum=sum+score[i][j];
		}
		ave[i]=sum/4;
	}
		for(j=0;j<=3;j++)
	{
		for(i=0;i<=3-j;i++)
		{
			if(ave[i]<ave[i+1])
			{
				medium=ave[i+1];
				ave[i+1]=ave[i];
				ave[i]=medium;
			}
		}
	}
	printf("这些学生的平均成绩从高到低排列为:\n");
	for(i=0;i<=4;i++)
	{
		printf("%.2f ",ave[i]);
	}
}
