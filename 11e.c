//average & sum of different numbers which are accepted by user as many as user want
#include<stdio.h>
void main()
{
	int n,i,sum=0,N,ave;
	printf("no. of elements user want to enter: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
{
	printf("no. elements value:");
	scanf("%d",&n);
	sum=sum+n;
}
ave=sum/N;
	printf("sum:%d",sum);
	printf("\n ave:%d",ave);
}
