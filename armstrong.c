//to find armstrong number or not
#include<stdio.h>
#include<math.h>
void main()
{
	int n,cnt=0,m,i,ans;
	float sum=0.0;
	scanf("%d",&n);
	for(i=n; i!=0; ++cnt)
	{
		i=i/10;
	}
	printf("\ncnt: %d",cnt);
	for(i=n;i!=0;i/=10)
	{
		m=i%10;
		printf("\nm: %d",m);
		ans = pow(m,cnt);
		printf("\nans=%d %d :%d",m,cnt,ans);
		sum=sum+ans;
	}
	printf("\nSum:%0.2f",sum);
	
	if( (int)sum == n )
	{
		printf("\n %d is an armstrong number" , n);
	}
	else
	{
		printf("\n %d is not an armstrong number" , n);
	}
}
