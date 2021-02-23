#include <stdio.h>
int main()
{
	int number,a,b,c,d,e;
	printf("输入一个不多于5位的正整数\n");
	scanf("%d",&number);
	a=number/10000;
	b=number/1000%10;
	c=number/100%10;
	d=number/10%10;
	e=number/1%10;
	if(number>=10000&&number<=99999)
	{
		printf("这个数字为5位数\n");
		printf("每一位数字分别为%d,%d,%d,%d,%d\n",a,b,c,d,e);
		printf("逆序输出为%d%d%d%d%d",e,d,c,b,a);
	}
	else if(number>=1000&&number<=9999)
	{
		printf("这个数字为4位数\n");
    	printf("每一位数字分别为%d,%d,%d,%d\n",b,c,d,e);
    	printf("逆序输出为%d%d%d%d",e,d,c,b);
	}
	else if(number>=100&&number<=999)
	{
		printf("这个数字为3位数\n");
   		printf("每一位数字分别为%d,%d,%d\n",c,d,e);
   		printf("逆序输出为%d%d%d",e,d,c);
	}
	else if(number>=10&&number<=99)
	{
		printf("这个数字为2位数\n");	
    	printf("每一位数字分别为%d,%d\n",d,e);
    	printf("逆序输出为%d%d",e,d);
	}
    else if(number>=0&&number<=9)
	{
		printf("这个数字为1位数\n");
    	printf("每一位数字分别为%d\n",e);
    	printf("逆序输出为%d",e);
	} 	                        
}