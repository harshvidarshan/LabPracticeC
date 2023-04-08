#include<stdio.h>
void main()
{
	int pps,ps,ds,dbms,df;
	float ave,per;
	printf("PPS: ");
	scanf("%d",&pps);
		printf("DS: ");
	scanf("%d",&ds);
		printf("DBMS: ");
	scanf("%d",&dbms);
		printf("DF: ");
	scanf("%d",&df);
		printf("PS: ");
	scanf("%d",&ps);
	per = (((pps+ds+dbms+df+ps)/5));
	printf("Percentage:%0.3f",per);
}
