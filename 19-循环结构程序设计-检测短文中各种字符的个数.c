#include <stdio.h>
int main()
{
	int Letter=0,letter=0,space=0,number=0,sign=0,i;
	char message[240];
	printf("�������(����ÿ�а�ʮ���ַ�):\n"); 
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
	printf("��дӢ����ĸ����Ϊ%d\nСдӢ����ĸ����Ϊ%d\n�ո����Ϊ%d\n���ָ���Ϊ%d\n�����ַ�����Ϊ%d\n",Letter,letter,space,number,sign);
}
