#include<stdio.h>
void main()
{
	int a=2,b=2,a1,a2;
	float pi=3.14,area,r,h,base,at,p,R,t,si;
		printf("\n-----3a--------");
	printf("\nHello World");
		printf("\n-----3b1--------");
	printf("\n91,\nSV-Rajkot");
		printf("\n-----3b2--------");
	printf("\n91");
	printf("\nSV-rajkot");
		printf("\n-----3c--------");
	printf("\nadd of two numbers:%d %d %d",a,b,a+b);
		printf("\n-----3d--------");
	printf("\nAverage of two numbers:%d",(a+b)/2);
		printf("\n-----3e--------");
	scanf("a1:%d",&a1);
	scanf("a2:%d",&a2);
	printf("add of a1 & a2:%d %d %d",a1,a2,a1+a2);
		printf("\n-----3f--------");
		printf("\nAverage of two numbers:%d",(a1+a2)/2);
	printf("\n-----3g--------");
	printf("\nRadius of circle:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\nArea of circle:%0.2f",area);
	printf("\n-----3h--------");
	printf("height:");
	scanf("%f",&h);
		printf("base:");
	scanf("%f",&base);
	at=h*base*0.5;
	printf("\nArea of triangle:%0.2f",at);
		printf("\n-----3i--------");
		printf("P:");
	scanf("%f",&p);
		printf("R:");
	scanf("%f",&R);
		printf("t:");
	scanf("%f",&t);
	si=(p*R*t)/100 ;
	printf("\nSimple Interest:%0.2f",si);
}
