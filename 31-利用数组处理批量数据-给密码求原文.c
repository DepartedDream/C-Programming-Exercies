#include <stdio.h>
int main()
{
	char message[7],code[7]={"Umtorhs"};
	int i;
	for(i=0;i<=6;i++)
	{
		if(65<=code[i]&&code[i]<=90)
		{
			message[i]=155-code[i];
		}
		else if(97<=code[i]&&code[i]<=122)
		{	
			message[i]=219-code[i];
		}
	}
	printf("����Ϊ");
	for(i=0;i<=6;i++)
	{
		printf("%c",code[i]);
	}
	printf("\n");
	printf("ԭ��Ϊ");
	for(i=0;i<=6;i++)
	{
		printf("%c",message[i]);
	}
}
