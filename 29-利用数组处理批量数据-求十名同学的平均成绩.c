#include <stdio.h>
int main()
{
	int i;
	float ave=0,sum=0,score[10];
	printf("������ÿ��ͬѧ�ĳɼ�(ʮ��ͬѧһ�ſ�)(����ȡС�������λ):\n");
	for(i=0;i<=9;i++)
	{
		score[i]=0;
		scanf("%f",&score[i]); 
		sum=sum+score[i];
	}
	ave=sum/10;
	printf("��ʮ��ѧ����ƽ���ɼ�Ϊ%.2f",ave);
}
