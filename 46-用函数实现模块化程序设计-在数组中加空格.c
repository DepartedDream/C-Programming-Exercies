#include <stdio.h>
#include <string.h>
int i=0;
int main()
{
	int space(char string[]);
	char a[100];
	printf("请输入一个数组:\n");
	scanf("%s",a);
	printf("两个数字间空格后结果为:\n");
	space(a); 
}
int space(char string[])
{
	int length;
	length=strlen(string);
	for(i=0;i<=length-1;i++)
	{
		printf("%c ",string[i]);
	}
}
