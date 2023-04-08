//print sum of series 1-2+3-4+..
#include<stdio.h>
void main()
{
	int i,n,s2=0,s1=0,sum=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("-%d",i);
			s2=s2+i;
		}
		else
		{
			printf("+%d",i);
			s1=s1+i;
		}
	}
	sum=s1-s2;
	printf("\nsum of series:%d",sum);
}
