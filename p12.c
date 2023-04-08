/*
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=7;j>=i;j--)
		{
			if(i%2!=0)
			printf("* ");
		}
		printf("\n");
	}
}
