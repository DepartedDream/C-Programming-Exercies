#include <stdio.h>
int main()
{
	float F,c;
	printf("输入一个华氏温度：");
	scanf("%f",&F);
	c=5.0000/9.0000*(F-32); 
	printf("摄氏温度为：%1.2f",c);
	return 0;
}
