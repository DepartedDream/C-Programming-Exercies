#include <Stdio.h>
int i,j;
int main()
{
	int a[3][3];
	int exchange(int array[3][3]);
	printf("请输入一个3x3的二维数组\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]); 
		}
	}
	exchange(a);
	printf("行列互换后结果为:\n");	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",a[i][j]); 
		}
		printf("\n");
	}
}
int exchange(int array[3][3])
{
	int medium;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=i;j++)
		{
			medium=array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=medium;
		}
	}
}
