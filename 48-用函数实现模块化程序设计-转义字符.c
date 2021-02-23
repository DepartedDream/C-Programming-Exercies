#include <stdio.h>
int main()
{
	char c1='a',c2='b',c3='c';
	char c4='\101',c5='\116';
	char c6='\x30',c7='\x41',c8='\x61';
	printf("H\tI\b\bJ k");   //  常见转义字符见书33页 
	printf("a%cb%c\tc%c\tabc\n",c1,c2,c3); 
	printf("c4=%c c5=%c\n",c4,c5);
	printf("c6=%c c7=%c c8=%c",c6,c7,c8);
}
