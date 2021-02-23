#include <stdio.h>
int main()
{
	int medium,i,j,n=0,score[99],order[99];
	char a[99];
	printf("按序号输入平均课程成绩:\n");
	for(i=0;a[i-1]!='\n';i++)
	{
		scanf("%d",&score[i]);
		scanf("%c",&a[i]);
		order[i]=i+1;
		n=n+1;
	}
	for(j=0;j<=n-1;j++)
	{
		for(i=0;i<=n-1-j;i++)
		{
			if(score[i]>score[i+1])
			{
				medium=score[i+1];
				score[i+1]=score[i];
				score[i]=medium;
				medium=order[i+1];
				order[i+1]=order[i];
				order[i]=medium;
			}
		}
	}
	printf("平均成绩最高的课程序号为第%d号\n",order[n-1]);
	printf("其平均成绩为%d",score[n-1]);
}
