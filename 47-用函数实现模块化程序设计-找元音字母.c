#include <stdio.h>
#include <string.h>
int i=0;
int main()
{
	int vowel(char string1[],char string2[]);
	char a[100],b[100];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:\n");
	gets(a);
	vowel(a,b);
	puts(b);
}
int vowel(char string1[],char string2[])
{
	int number=0;
	int length=0;
	length=strlen(string1);
	for(i=0;i<=length-1;i++)
	{
		if(string1[i]=='A'||\
		string1[i]=='a'||\
		string1[i]=='E'||\
		string1[i]=='e'||\
		string1[i]=='I'||\
		string1[i]=='i'||\
		string1[i]=='O'||\
		string1[i]=='o'||\
		string1[i]=='U'||\
		string1[i]=='u')
		{
		 string2[number++]=string1[i];
		}
	}
}
