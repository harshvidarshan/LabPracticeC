//roots of equation..
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float r1,r2,d;
		printf("a: ");
	scanf("%d",&a);
		printf("b: ");
	scanf("%d",&b);
		printf("c: ");
	scanf("%d",&c);
	d=(b*b)- (4*a*c);
	if(d>0)
	{
		printf("there are two roots");
		r1=(-b+sqrt(d))/2*a ;
		printf("\nroot 1:%0.2f",r1);
		r2=(-b-sqrt(d))/2*a ;
		printf("\nroot 2:%0.2f",r2);
	}
	else if(d==0)
	{
		printf("root is one:%0.2f",d);
	}
	else
	{
			printf("no roots");
	}
}
