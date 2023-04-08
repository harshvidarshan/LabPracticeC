//largest number from 3 numbers without using logical operator(&&)
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
		printf("largest number:%d",a);
		}
	}
	if(b>c)
	{
		if(b>a)
		{
		printf("largest number:%d",b);	
		}
	}
	if(c>b)
	{
		if(c>a)
		{
		printf("largest number:%d",c);	
		}
	}
}
