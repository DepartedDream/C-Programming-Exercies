#include <stdio.h>
int main()
{
	float score[3][4],sum,ave[4];
	int i,j;
	printf("������ÿ��ͬѧ�ĳɼ�(����ͬѧ���ſ�)(����ȡС�������λ):\n");
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
		printf("��%d�ſγ�ƽ���ɼ�Ϊ%.2f\n",i+1,ave[i]);
	}
}
