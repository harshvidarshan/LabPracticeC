//infix to postfix
#include<stdio.h>
#define n 100
int top=-1;
int s[n];
void push(char);
int pop();
int f(char);
int g(char);
int r(char);
int main()
{
	char infix[n],polish[n]="",next,temp;
	int i=1,j=0,rank=0;
	top=0;
	s[top]='(';
	printf("Enter INFIX: ");
	scanf("%s",infix);
	next=infix[i];
	while(next!='\0')
	{
		if(top<0)
		{
			printf("\n INVALID STRING");
			return 0;
		}
		while(g(s[top])>f(next))
		{
			temp=pop();
			polish[j]=temp;
			rank=rank+r(temp);
			j++;
			if(rank<1)
			{
			 printf("\n INVALID STRING");	
			 return ;
			}
		}
		if(g(s[top])!=f(next))
		{
			push(next);
		}
		else
		{
			pop();
		}
		i++;
		next=infix[i];
	}
	if(top!=-1 || rank!=1)
	{
		printf("\n INVALID STRING");
	}
	else
	{
		printf("\n VALID STRING:%s",polish);
	}
}
void push(char t)
{
	if(top>=n-1)
	{
		printf("\n STACK OVERFLOW");
		return;
	}
	top=top+1;
	s[top]=t;	
}
int pop()
{
	if(top==-1)
	{
		printf("\n STACK UNDERFLOW");
		return 0;
	}
	top=top-1;
	return (s[top+1]);
}
int f(char t)
{
	if(t=='+' || t=='-')
	{
		return 1;
	}
	else if(t=='*' || t=='/')
	{
		return 3;
	}
	else if(t=='^' )
	{
		return 6;
	}
	else if(t>='a' && t<='z' || t>='A' && t<='Z')
	{
		return 7;
	}
	else if(t=='(')
	{
		return 9;
	}
	else
	{
		return 0;
	}
}
int g(char t)
{
		if(t=='+' || t=='-')
	{
		return 2;
	}
	else if(t=='*' || t=='/')
	{
		return 4;
	}
	else if(t=='^' )
	{
		return 5;
	}
	else if(t>='a' && t<='z' || t>='A' && t<='Z')
	{
		return 8;
	}
	else if(t=='(')
	{
		return 0;
	}
	else
	{
		return 0;
	}
}
int r(char t)
{
		if(t=='+' || t=='-' || t=='*' || t=='/' || t=='^' )
	{
		return -1;
	}
	
	else if(t>='a' && t<='z' || t>='A' && t<='Z')
	{
		return 1;
	}
}
