//using conditional operator find out largest number from 3 numbers
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("a: ");
	scanf("%d",&a);
		printf("b: ");
	scanf("%d",&b);
		printf("c: ");
	scanf("%d",&c);
	d=(a>(b>c?b:c)?a:(b>c?b:c));
	printf("largest number:%d",d);
}
