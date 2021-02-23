#include <stdio.h>
int main()
{
	int order[10],i,j,int_medium=0;
	float score[10],float_medium=0;
	printf("请按序号顺序输入每个同学的成绩(十名同学一门课)(最多读取小数点后两位):\n");
	for(i=0;i<=9;i++)
	{
		score[i]=0;
		order[i]=0;
		scanf("%f",&score[i]);
		order[i]=i+1;
	}
	for(j=0;j<=8;j++)
	{
		for(i=0;i<=8-j;i++)
		{
			if(score[i]>score[i+1])
			{
				float_medium=score[i+1];
				score[i+1]=score[i];
				score[i]=float_medium;
				int_medium=order[i+1];
				order[i+1]=order[i];
				order[i]=int_medium;
			}
		}
	}
	printf("成绩最高的同学为第%d号\n",order[9]);
	printf("其成绩为%的%.2f",score[9]);
}
