//print numbers between two given numbers which is divisible by 2 but not by 3..
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("n: ");
	scanf("%d",&n);
	while(i>=1 && i<=n)
	{
		if(i%2==0 && i%3!=0)
		printf("numbers between two given numbers which is divisible by 2 but not by 3 :%d \n",i);
		i++;
	}
}
