//leap year or not
#include<stdio.h>
void main()
{
	int year;
	printf("Enter any year: ");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 )
	{
		printf("it is leap year:%d",year);
	}
	else if(year%400==0)
	{
		printf("it is leap year:%d",year);
	}
	else
	{
		printf("it is not leap year:%d",year);
	}
}
