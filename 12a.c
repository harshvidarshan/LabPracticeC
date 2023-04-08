//print every digit of number
#include<stdio.h>
void main()
{
	int i,m,n;
	printf("n: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		while(n!=0)
		{
		m=n%10;
		n=n/10;
		printf("%d\n",m);
	}
	}
}
