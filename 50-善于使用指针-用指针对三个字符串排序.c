#include <stdio.h>
#include <string.h>
int main()
{
	int i,j;
	char *medium,string[3][20],*p_string[3];
	printf("�����������ַ���(һ���ַ������20���ַ�):\n");
	for(i=0;i<=2;i++)
	{
		p_string[i]=string[i];
		gets(string[i]);
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1-i;j++)
		{
			if(strcmp(string[j],string[j+1])>0)
			{
				medium=p_string[j];
				p_string[j]=p_string[j+1];
				p_string[j+1]=medium;
			}
		}
	}
	printf("�����ַ�����������Ϊ:\n");
	for(i=0;i<=2;i++)
	{
		puts(p_string[i]);
	}
}
