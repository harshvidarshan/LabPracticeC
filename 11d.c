//sum of first and last digit 
#include <stdio.h>
void main()
{
    int i,first,last,n,sum;
    printf("n: ");
    scanf("%d",&n);
   	for(i=1;i<=n;i++)
   	{
   		last=n%10;	
	 }
    printf("last:%d",last);
    while(first>n)
    {
    	first=first/10;
	}
	printf("\nfirst:%d",first);
	sum=first+last;
	printf("\nsum:%d",sum);
}
