//print 1 to n using while loop
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
}
