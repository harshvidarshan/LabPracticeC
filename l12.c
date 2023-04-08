//push,pop,peep,change,display
#include<stdio.h>
#define n 100
int top=-1;
int s[n];
void push(int);
int pop();
int peep(int i);
void change(int,int);
void display();
int main() 
{
	int x,i,ch;
	//printf("total elements to be entered in stack: ");
	//scanf("%d",&n);
	do
	{
	printf("\nenter your choice::\n 1-push,2-pop,3-peep,4-change,5-display,6-exit loop\n::");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nenter element in stack: ");
			scanf("%d",&x);
			push(x);
			break;
			
			case 2:
			i=pop();
			printf("element removed:%d",i);
			break;
			
			case 3:
			printf("enter index of element in stack: ");
			scanf("%d",&i);
			x=peep(i);
			printf(" to see element of given index: %d %d-index",x,i);
			break;
			
			case 4:
			printf("enter index to CHANGE element of that index: ");
			scanf("%d",&i);
			printf("enter element in stack to CHANGE: ");
			scanf("%d",&x);
			change(i,x);
			break;
			
			case 5:
			display();
			break;
				
			case 6:
			return;
			break;
			
			default:
			printf("\n wrong input");
		}
	}
		while(ch!=6);
}
void push(int x)
{
	if(top>=n-1)
	{
		printf("\nstack overflow");
	}	
	top=top+1;
	s[top]=x;
	//printf("entered element in stack:%d",x);
}
int pop(int i)
{
	if(top==-1)
	{
	printf("\nstack underflow");
	return 0;	
	}
	top=top-1;
	return (s[top+1]);
}
int peep(int i)
{
	if(top-i+1<=-1)
	{
		printf("\nstack underflow");
	}
	return (s[top-i+1]);
}
void change(int i, int x)
{
    if(top-i+1<=-1)
	{
		printf("\nstack underflow");
	}
	s[top-i+1]=x;
	printf("\n new x:%d",x);	
}
void display(int x)
{
	int i;
	if(top==0)
	{
		printf("\nstack overflow");
	}
	for(i=top;i>=0;i--)
	{
		printf("\n stack element:%d",s[i]);
	}
}
