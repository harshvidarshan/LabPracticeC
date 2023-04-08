//maximum and minimum numbers from given 10 numbers
#include<stdio.h>
void main()
{
	int i,max=0,min=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter 10 numbers: ");
		scanf("%d",&i);
		if(max>0)
		{
			max=max+1;
		}
		else
		{
			min=min+1;
		}
	}
		printf("maximum numbers:%d",max);
		printf("minimum numbers:%d",min);
	
}
