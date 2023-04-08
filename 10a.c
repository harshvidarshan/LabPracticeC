//sum of 1 to n
#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\ni:%d",i);
		sum=sum+i;
		i++;
	}
	printf("\nsum of 1 to n:%d",sum);
}
