#include <stdio.h>
int main()
{
	float score[3][4],sum,ave[4];
	int i,j;
	printf("请输入每个同学的成绩(三名同学四门课)(最多读取小数点后两位):\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%f",&score[i][j]);
		}
	}
	for(j=0;j<=3;j++)
	{
		sum=0;
		ave[j]=0; 
		for(i=0;i<=2;i++)
		{
			sum=sum+score[i][j];
		}
		ave[j]=sum/3;
	}
	for(i=0;i<=3;i++)
	{
		printf("第%d门课程平均成绩为%.2f\n",i+1,ave[i]);
	}
}
