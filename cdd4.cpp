#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("it is capital alphabet");
	else if(ch>=97&&ch<=122)
	printf("it is small alphabet");
	else if(ch>=48&&ch<=57)
	printf("it is digit");
	else
	printf("it is special  character");
	return 0;
}
