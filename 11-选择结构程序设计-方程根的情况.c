#include <stdio.h>
#include <math.h>
int main()
{   
	float a,b,c;
	printf("����ax^2+bx+c=0,�ֱ�����a,b,c��ֵ\n");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a=0){
	printf("���Ƕ��η��̣�����һ�η���");}
		else if(pow(b,2)-4*a*c==0){
		printf("�������ȵ�ʵ��");}
			else if(pow(b,2)-4*a*c>0){
			printf("���������ȵ�ʵ��");}
				else if(pow(b,2)-4*a*c<0){
				printf("�����������");} 		
}	
