#include<stdio.h>
int main()
{
	int n,r,max=0;
	printf("enter the no");
	scanf("%d",&n);
	do
	{
		r=n%10;
		if(r>max)
		max=r;
		n=n/10;
	}
	while(n!=0);
	printf("%d",max);
	return 0;
	}
	
