//print sum of series 1+4+9+25+36+...+n*n//
#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i*i;
		i++;
	}
	printf("sum of series:%d",sum);
}
