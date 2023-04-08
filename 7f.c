//input numnber from user and check last digit is odd or even
#include<stdio.h>
void main()
{
	int a,b;
	printf("a: ");
	scanf("%d",&a);
	b=a%2;
	if(b%2!=0)
	{
		printf("last digit of no. is odd:%d",a);
	}
	else
	{
		printf("last digit of no. is even:%d",a);
	}
}
