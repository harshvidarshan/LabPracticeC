//character is capital,small,digit or special
#include<stdio.h>
void main()
{
	char a,A;
	printf("enter any character or number: ");
	scanf("%c",&a);
	if(a<=90 && a>=65)
	{
		printf("character is capital:%c",a);
	}
	else if(a>=97 && a<=122)
	{
		printf("character is small:%c",a);
	}
	else if(a>=48 && a<=57)
	{
			printf("character is digit:%c",a);
	}
	else
	{
			printf("character is special:%c",a);
	}
}
