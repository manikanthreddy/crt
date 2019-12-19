#include<stdio.h>
int manin()
{
	int n,i,j,flag;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;n>0;i++)
	{
		flag=0;
		for(j=2;j<=1/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d",i);
			n--;
		}
	}
	return 0;
}
