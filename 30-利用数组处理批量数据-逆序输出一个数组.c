#include <stdio.h>
int main()
{
	int i,medium=0,n=0;
	int a[99];
	char b[99];
	for(i=0;i<=98;i++)
	{
		a[i]=0;
		b[i]='a';
	}
	printf("����һ������(����enter����ֹͣ����):\n");
	for(i=0;b[i-1]!='\n';i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&b[i]);
		n=n+1;
	}
	printf("�������������Ϊ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
