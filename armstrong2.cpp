#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,num,l=0;
	printf("enter the number");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		l++;
		n=n/10;
		}
		n=num;
		while(n!=0)
		{
			r=n%10;
			sum=sum+pow(r,l);
			n=n/10;
		}
		if(num=sum)
		printf("%d is a armstrong",num);
		else
		printf("%d is not armstrong",num);
		return 0;
}
