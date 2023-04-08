#include<stdio.h>
int main()
{
	int sec,hrs,min,secs;
	printf("Seconds: ");
	scanf("%d",&sec);
	hrs=sec/3600;
	min=(sec -(3600*hrs))/60;
	secs=(sec -(3600*hrs)-(min*60));
	printf("H:M:S - %d:%d:%d\n",hrs,min,secs);
}
