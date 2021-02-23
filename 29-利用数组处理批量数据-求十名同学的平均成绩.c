#include <stdio.h>
int main()
{
	int i;
	float ave=0,sum=0,score[10];
	printf("请输入每个同学的成绩(十名同学一门课)(最多读取小数点后两位):\n");
	for(i=0;i<=9;i++)
	{
		score[i]=0;
		scanf("%f",&score[i]); 
		sum=sum+score[i];
	}
	ave=sum/10;
	printf("这十名学生的平均成绩为%.2f",ave);
}
