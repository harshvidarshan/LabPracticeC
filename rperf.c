//perfect number or not
//perfect number means number whose sum of factors is equal to number not including that factor
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("no is perfect");
	}
	else
	{
		printf("no. is not perfect");
	}
}
