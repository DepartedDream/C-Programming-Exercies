/*
��Բ�뾶r=1.5,Բ����h=3,��Բ�ܳ�,Բ���,Բ������,Բ�����,Բ�����,���������λС�� 
*/
#include <stdio.h>
int main()
{
	float r=1.5;
	float h=3;
	float a,b,c,d,e;//Բ�ܳ�a,Բ���b,Բ������c,Բ�����d,Բ�����e
	a=2*3.14*r;
	b=3.14*r*r;
	c=2*3.14*r*h;
	d=4/3*3.14*r*r;
	e=3.14*r*r*h;
	printf("Բ�ܳ�Ϊ%.2f\n",a);
	printf("Բ���Ϊ%.2f\n",b);
	printf("Բ������Ϊ%.2f\n",c); 
	printf("Բ�����Ϊ%.2f\n",d); 
	printf("Բ�����Ϊ%.2f\n",e); 
} 
