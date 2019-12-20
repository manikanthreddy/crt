#include<stdio.h>
int main()
{
	long long int n,r,sum=0;
	printf("enter a no");
	scanf("%lld",&n);
	a:
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum>9)
	{
		n=sum;
		sum=0;
		goto a;
	}
	printf("%lld",sum);
    return 0;
	}
	
