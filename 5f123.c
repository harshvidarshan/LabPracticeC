#include<stdio.h>
void main()
{
	int gs,bs,hr,da;
	scanf("%d",&bs);
	if(bs>=10000)
	{
		hr=(0.2)*bs ;
		da=(0.8)*bs ;
		gs=hr+da;
		printf("\ngross salary:%d",gs);
	}
	printf("\n---5f2---");
	if(bs>=20000)
	{
		hr=(0.25)*bs ;
		da=(0.9)*bs ;
		gs=hr+da;
		printf("\ngross salary:%d",gs);
	}
		printf("\n---5f3---");
	if(bs>=30000)
	{
		hr=(0.3)*bs ;
		da=(0.95)*bs ;
		gs=hr+da;
		printf("\ngross salary:%d",gs);
	}
}
