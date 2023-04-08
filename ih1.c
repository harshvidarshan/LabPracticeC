#include<stdio.h>
int swap(int , int );
int main()
{
	int i,n,f,l,nn,a,b;
	printf("n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		l=n%10;
	}
	f=n;
	while(f>10)
	{
		f=f/10;
	}
	printf("\nfirst:%d",f);
	printf("\nlast:%d",l);
	swap(f,l);
	//printf("\n new n:%d",nn);
}
int swap(int f, int l)
{
	int temp,n;
	temp=f;
	f=l;
	l=temp;
	printf("\nafter swapping values::-::f:%d,l:%d",f,l);
}


