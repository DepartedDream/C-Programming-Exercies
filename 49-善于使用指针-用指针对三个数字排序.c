#include <stdio.h>
int main()
{
	int i,j,medium;
	int *p_number[3];
	int number[3];
	printf("��������������:\n"); 
	for(i=0;i<=2;i++)
	{
		p_number[i]=&number[i];
		scanf("%d",&number[i]);
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1-i;j++)
		{
			if(number[i]>number[i+1])
			{
				medium=*p_number[i];
				*p_number[i]=*p_number[i+1];
				*p_number[i+1]=medium;
			}
		}
	}
	printf("���������ֵ�������Ϊ:\n");
	for(i=0;i<=2;i++)
	{
		printf("%d ",number[i]);
	}
}
