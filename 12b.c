//sum of digit of given number & reverse order
#include<stdio.h>
void main()
{
	int i,n,m,sum=0;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		while(n!=0)
		{
			m=n%10;
			n=n/10;
			printf("\n %d ",m);
			sum=sum+m;
		}
	}
	printf("\nsum:%d",sum);
}
