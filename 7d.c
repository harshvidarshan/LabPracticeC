//add,subtract,multiply and divide using 2 numbers as per user's choice
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number: ");
	scanf("%d",&b);
	if(a>0 && b>0)
	{
		printf("add :%d",a+b);
		printf("\nsub:%d",b-a);
		printf("\nmultiply:%d",a*b);
		printf("\ndivide:%d",a%b);
	}
		else
	{
		printf("\nmul:%d",a*b);
		printf("\nadd:%d",a+b);
		printf("\nsub:%d",a-b);
		printf("\ndivide:%d",b%a);
	}
}

