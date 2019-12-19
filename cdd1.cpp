#include<stdio.h>
int main()
{
	int a=123456789;
	long int b=123456789;
	unsigned int c=560000;
	printf("a=%d",a);
	printf("\nb=%d",b);
	printf("\nc=%d",c);
	printf("\n%a=%d",&a);
	return 0;
}
