//swap two numbers using user define function(call by reference)
#include<stdio.h>
int swap(int *a,int *b);
void main()
{
	int *a,*b,m;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	swap(&a,&b);
	//printf("swapped values:%d %d",a,b);
}
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("swapped values:%d %d",*a,*b);
}
