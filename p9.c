/*
AAAAA
BBBB
CCC
DD
E */
#include<stdio.h>
void main()
{
	char i,j;
	for(i='A';i<='E';i++)
	{
		for(j='E';j>=i;j--)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}
