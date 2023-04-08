#include<stdio.h>
void main()
{
	int n,arr[100],i,sum=0,ave;
	printf("total no. of elements user: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter elements: ");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		ave=sum/n;
	}
	printf("sum:%d",sum);	
	printf("\nave:%d",ave);	
}
