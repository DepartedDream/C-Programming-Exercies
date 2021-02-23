#include <stdio.h>
#include <string.h>
int i,j;
int main()
{
	char letter[10];
	char *pointer_letter[10];
	void order(char *Pointer_letter[]);
	printf("请输入10个字符:\n");
	for(i=0;i<=9;i++)
	{
		pointer_letter[i]=&letter[i];
		scanf("%c",&letter[i]);
	}
	order(pointer_letter);
	printf("排序结果为:\n");
	for(i=0;i<=9;i++)
	{
		printf("%c",letter[i]);
	}
}
void order(char *Pointer_letter[])
{
	char medium;
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8-i;j++)
		{
			if(*Pointer_letter[j]>*Pointer_letter[j+1])
			{
				medium=*Pointer_letter[j];
				*Pointer_letter[j]=*Pointer_letter[j+1];
				*Pointer_letter[j+1]=medium;
			}
		}
	}
}
