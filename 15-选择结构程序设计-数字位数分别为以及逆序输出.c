#include <stdio.h>
int main()
{
	int number,a,b,c,d,e;
	printf("����һ��������5λ��������\n");
	scanf("%d",&number);
	a=number/10000;
	b=number/1000%10;
	c=number/100%10;
	d=number/10%10;
	e=number/1%10;
	if(number>=10000&&number<=99999)
	{
		printf("�������Ϊ5λ��\n");
		printf("ÿһλ���ֱַ�Ϊ%d,%d,%d,%d,%d\n",a,b,c,d,e);
		printf("�������Ϊ%d%d%d%d%d",e,d,c,b,a);
	}
	else if(number>=1000&&number<=9999)
	{
		printf("�������Ϊ4λ��\n");
    	printf("ÿһλ���ֱַ�Ϊ%d,%d,%d,%d\n",b,c,d,e);
    	printf("�������Ϊ%d%d%d%d",e,d,c,b);
	}
	else if(number>=100&&number<=999)
	{
		printf("�������Ϊ3λ��\n");
   		printf("ÿһλ���ֱַ�Ϊ%d,%d,%d\n",c,d,e);
   		printf("�������Ϊ%d%d%d",e,d,c);
	}
	else if(number>=10&&number<=99)
	{
		printf("�������Ϊ2λ��\n");	
    	printf("ÿһλ���ֱַ�Ϊ%d,%d\n",d,e);
    	printf("�������Ϊ%d%d",e,d);
	}
    else if(number>=0&&number<=9)
	{
		printf("�������Ϊ1λ��\n");
    	printf("ÿһλ���ֱַ�Ϊ%d\n",e);
    	printf("�������Ϊ%d",e);
	} 	                        
}