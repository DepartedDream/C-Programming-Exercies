#include <stdio.h>
#include <string.h>
int letter=0,space=0,number=0,sign=0;
int length,i;
int main()
{
	char a[100];
	int count(char string[]);
	printf("������һ���ַ���:\n");
	gets(a);
	count(a);
	printf("��ĸ����Ϊ:%d\n"
	        "���ָ���Ϊ:%d\n"
			"�ո����Ϊ:%d\n"
			"�����ַ�����Ϊ:%d\n"
			,letter,number,space,sign);
}
int count(char string[])
{
	length=strlen(string);
	for(i=0;i<=length-1;i++)
	{	
		if (65<=string[i]&&string[i]<=90||97<=string[i]&&string[i]<=122)
		{	
			letter=letter+1;
		}
		else if (48<=string[i]&&string[i]<=57)
		{
			number=number+1;
		}	
		else if (string[i]==32)
		{
			space=space+1;
		}
		else
		{
			sign=sign+1;
		}
	}
}
