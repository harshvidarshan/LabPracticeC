//given number is positive and negative using if else
#include<stdio.h>
void main()
{
	int a,b;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is positive:%d\n",a);
		printf("b is negative:%d",b);
	}
	else
	{
		printf("b is positive:%d\n",b);
		printf("a is negative:%d",a);
	}
}
