#include<stdio.h>
void main()
{
	float f,c,u,a,t,d;
		printf("\n-----4b--------");
	printf("\nF:");
	scanf("%f",&f);
	c=(f-32)/1.8 ;
	printf("\nC:%0.2f",c);
		printf("\n-----4a--------");
	printf("\nC: ");
	scanf("%f",&c);
	f=(1.8*c)+32 ;
	printf("\nF:%0.2f",f);
		printf("\n-----4c--------");
		printf("\nu: ");
	scanf("%f",&u);
		printf("\na: ");
	scanf("%f",&a);	
		printf("\nt: ");
	scanf("%f",&t);
	d=((u*t)+a*t*t);
		printf("\nDistance: %0.2f",d);
}
