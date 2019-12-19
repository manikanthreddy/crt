#include<stdio.h>
int main()
{
	int n,i;
	printf("enter n value");
	scanf("%d",&n);
	i=1;
	a:
		printf("%d",i);
		i++;
		if(i<=n)
		goto a;
		return 0;
}
