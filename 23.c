#include<stdio.h>
void main()
{
	int n,a[100],i,m,e;
	printf("Enter array size: ");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter specific position: ");
	scanf("%d",&m);
	printf("Element to be inserted: ");
	scanf("%d",&e);
	i=m;
	a[m]=e;
	for(i=0;i<n;i++)
	{
		if(i==m)
		{
		i=i+m;
		printf("%d",a[i]);
		}
	}
}
