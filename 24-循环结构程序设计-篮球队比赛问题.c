#include <stdio.h>
int main()
{   char A,B,C;
	char i,w,e;
	for(i=88;i<=90;i++)
	{	
		C=i;
		if(C!='X'&&C!='Z')
		{	
			break;
		}
	}
	for(i=88;i<=90;i++)
	{	
		A=i;
		if(A!='X'&&A!=C)
		{
			break;
		}
	}
	for(i=88;i<=90;i++)
	{	
		B=i;
		if(B!=A&&B!=C)
		{
			break;
		}
	}
		printf("A VS %C\nB VS %C\nC VS %C",A,B,C);
}
