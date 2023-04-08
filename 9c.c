//odd numbers between 1 to n..
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		printf("odd number between 1 to n :%d \n",i);
		i++;
	}
}
