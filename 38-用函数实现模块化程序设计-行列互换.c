#include <Stdio.h>
int i,j;
int main()
{
	int a[3][3];
	int exchange(int array[3][3]);
	printf("������һ��3x3�Ķ�ά����\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]); 
		}
	}
	exchange(a);
	printf("���л�������Ϊ:\n");	
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
