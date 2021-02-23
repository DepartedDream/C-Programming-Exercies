#include <stdio.h>
int main()
{
	int Letter=0,letter=0,space=0,number=0,sign=0,i;
	char message[240];
	printf("输入短文(三行每行八十个字符):\n"); 
	for(i=0;i<=239;i++)
	{
		scanf("%c",&message[i]);
	}
	for(i=0;i<=239;i++)
	{	
		if(65<=message[i]&&message[i]<=90)
		{
			Letter=Letter+1;
		}
		else if (97<=message[i]&&message[i]<=122)
		{	
			letter=letter+1;
		}	
		else if (message[i]==32)
		{
			space=space+1;
		}
		else if (48<=message[i]&&message[i]<=57)
		{
			number=number+1;
		}
		else
		{
			sign=sign+1;
		}
	}
	printf("大写英文字母个数为%d\n小写英文字母个数为%d\n空格个数为%d\n数字个数为%d\n其它字符个数为%d\n",Letter,letter,space,number,sign);
}
