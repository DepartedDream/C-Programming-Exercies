#include <stdio.h>
#include <string.h>
int i;
int main()
{
	int reverse(char string[]);
	char a[100];
	printf("������һ���ַ���:\n");
	gets(a);
	reverse(a);
	printf("������Ϊ:\n%s\n",a);
}
int reverse(char string[])
{
	int medium=0,length=0;
	length=strlen(string);
	for(i=0;i<=length/2;i++)
	{
		medium=string[i];
		string[i]=string[length-1-i];
		string[length-1-i]=medium;
	}
}
