#include <stdio.h>
#include <string.h>
int i;
int main()
{
	char a[100];
	char b[100];
	int integrate(char array1[],char array2[]);
	printf("�������һ������:\n");
	gets(a);
	printf("������ڶ�������:\n");
	gets(b);
	integrate(a,b);
	printf("�ϲ����Ϊ:\n%s",a);
}

int integrate(char array1[],char array2[])
{
	int length1;
	int length2;
	length1=strlen(array1);
	length2=strlen(array2);
	for(i=0;i<=length2-1;i++)
	{
		array1[i+length1]=array2[i];
	}
}