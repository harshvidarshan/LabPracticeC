//read marks of 5 subject and give grade
#include<stdio.h>
void main()
{
	int a,b,c,d,e,per;
	printf("a: ");
	scanf("%d",&a);
		printf("b: ");
	scanf("%d",&b);
		printf("c: ");
	scanf("%d",&c);
		printf("d: ");
	scanf("%d",&d);
		printf("e: ");
	scanf("%d",&e);
	per=(a+b+c+d+e)/5;
	printf("percentage:%d %",per);
	if(per<35)
	{
		printf("\nfail");
	}
	else if(per>=35 && per<45)
	{
		printf("\npass class");
	}
	else if(per>=45 && per<60)
	{
		printf("\nsecond class");
	}
	else if(per>=60 && per<70)
	{
		printf("\nfirst class");
	}
	else if(per>=70)
	{
		printf("\ndistinction");
	}
}
