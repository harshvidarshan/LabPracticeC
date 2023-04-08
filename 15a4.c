/*  1
	0 1
	1 0 1 */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
if(i%2==0)
{
if(j%2==0)
{
k=1;
printf("%d",k);
}
else
{
k=0;
printf("%d",k);
}
}
else
{
if(j%2==0)
{
k=0;
printf("%d",k);
}
else
{
k=1;
printf("%d",k);
}
}
}
printf("\n");
}
} 	



 

