/*
   1
  2 2
 3 3 3
4 4 4 4
*/
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
