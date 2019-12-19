#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==1)
		printf("%d\t",i);
		i++;
	}
	return 0;
	}

