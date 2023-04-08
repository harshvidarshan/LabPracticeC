//read n number in an array & print it using pointer
#include<stdio.h>
void main()
{
	int a[100],i,n=5,*m;
	for(i=0;i<n;i++)
	{
		printf("\nenter array elements: ");
		scanf("%d",&a[i]);
		m=&a[i];
		printf("\nele:\n%d",*m);
	}
}
