//basic salary of an employee is given by user and calculate gross salary..
#include<stdio.h>
void main()
{
	float bs,gs,da,hra;
	printf("enter basic salary:");
	scanf("%f",&bs);
	if(bs>10000)
	{			
		if(bs>20000)
		{
			if(bs>=30000)
			{
				da=95*bs/100;
				hra=(0.03*bs)+da;
				printf("\nda:%0.2f",da);
				printf("\nhra:%0.2f",hra);
			}
		}	
	}
	if(bs<30000)
	{
		if(bs<=20000)
		{
				da=90*bs/100;
				hra=(0.25*bs)+da;
				printf("\nda:%0.2f",da);
				printf("\nhra:%0.2f",hra);
		}
	}
	if(bs=1000 && bs>10000)
	{
				da=80*bs/100;
				hra=(0.02*bs)+da;
				printf("\nda:%0.2f",da);
				printf("\nhra:%0.2f",hra);
	}
}

