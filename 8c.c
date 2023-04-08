//read 3 numbers , from first two numbers get multiply of result and third number
#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("a: ");
	scanf("%d",&a);
		printf("b: ");
	scanf("%d",&b);
		printf("c: ");
	scanf("%d",&c);
	d=(a>b?a:b);
	e=c*d;
	printf("multiply of largest number and third number:%d",e);
}
