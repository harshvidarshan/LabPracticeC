//to find perfect number or not
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			sum=sum+i;	
		}
	}
	printf("Sum:%d",sum);
	if(sum==n)
	{
		printf("\n Perfect number");
	}
	else
	{
		printf("\n Not Perfect number");
	}
}
