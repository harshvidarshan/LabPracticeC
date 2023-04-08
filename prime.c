#include<stdio.h>
void main()
{
	int i,j,a,b,prime=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
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
		if(prime==0)
		{
			printf("%d\n",i);
		}
	}

}
