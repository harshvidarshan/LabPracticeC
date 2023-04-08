//largest of 3 numbers
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
	if(a>c && a>b)
	{
		printf("largest number:%d",a);
	}
	else if(c>a && c>b)
	{
		printf("largest number:%d",c);
	}
	else
	{
		printf("largest number:%d",b);
	}
}
