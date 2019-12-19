#include<stdio.h>
int main()
{
	int n,r,sum=0,num=0;
	printf("enter the number");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(num==sum)
	printf("%d is armstrong",num);
	else
	printf("%d is not  armstrong",num);
	return 0;
}
