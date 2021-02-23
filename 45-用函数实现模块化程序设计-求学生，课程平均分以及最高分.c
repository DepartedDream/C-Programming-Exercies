#include<stdio.h>
int i,j;
int student_ave[10],class_ave[5],best_score;
int position_y,position_x;
int main()
{
	int score[10][5];
	void f_student_ave(int Score[10][5]);
	void f_class_ave(int Score[10][5]);
	void f_best_score(int Score[10][5]);
	printf("请输入10个学生5门课的成绩(只支持整数)\n");
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&score[i][j]);
		}
	}
	f_student_ave(score);
	f_class_ave(score);
	f_best_score(score);
	printf("每个学生平均分为:\n"); 
	for(i=0;i<=9;i++)
	{
		printf("%d ",student_ave[i]); 
	}
	printf("\n"); 
	printf("每门课的平均分为:\n"); 
	for(j=0;j<=4;j++)
	{
		printf("%d ",class_ave[j]); 
	}
	printf("\n");
	printf("最高成绩为:\n第%d位同学\n第%d门课",position_y,position_x);
}
void f_student_ave(int Score[10][5])
{
	int sum;
	for(i=0;i<=9;i++)
	{
		sum=0;
		for(j=0;j<=4;j++)
		{
			sum=sum+Score[i][j];
		}
		student_ave[i]=sum/5;
	}
}
void f_class_ave(int Score[10][5])
{
	int sum;
	for(j=0;j<=4;j++)
	{
		sum=0;
		for(i=0;i<=9;i++)
		{
			sum=sum+Score[i][j];
		}
		class_ave[j]=sum/10;
	}
}
void f_best_score(int Score[10][5])
{
	best_score=Score[0][0];
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(best_score<Score[i][j])
			{
				best_score=Score[i][j];
				position_y=i+1;
				position_x=j+1;
			}
		}
	}
}

