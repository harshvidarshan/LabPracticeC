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
	if(a==b || b==c || c==a)
	{
	printf("triangle is isosceles");
	}
	else if(a==b && b==c && c==a)
	{
		printf("traingle is equilateral");
	}
	else if(a!=b && b!=c && c!=a)
	{
		printf("traingle is scalene");
	}
	else
	{
		printf("traingle is right angled triangle");
	}
}
