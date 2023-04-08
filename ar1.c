//wap to even number in array
#include<stdio.h>
void main()
{
	int m[5],i;
	
	printf(" enter 5 array number: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<5;i++)
	{
		if(m[i]%2==0)
		{
			printf("%d=index of %d\n",i,m[i]);
		}
	}
    

}
