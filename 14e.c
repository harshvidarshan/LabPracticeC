//prime numbers between two numbers
#include<stdio.h>
void main()
{
	int a,b,i,j,prime=0;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		if(i==0 || i==1)
		{
			prime=1;
			continue;
		}
		else
		{
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					prime=1;
					break;
				}
				else
				{
					prime=0;
					continue;
				}
			}
		}
		if(prime==0)
		{
			printf("%d \n",i);
		}
	}
	
}
