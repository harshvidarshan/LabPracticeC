//using conditional operator find out largest number from 2 numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("a: ");
	scanf("%d",&a);
		printf("b: ");
	scanf("%d",&b);
	c=(a>b)?a:b;
	printf("largest number:%d",c);
}
