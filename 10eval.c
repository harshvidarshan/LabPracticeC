//string frequency
#include<stdio.h>
void main()
{
	char s[100];
	int count=1,i,j,n;
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		if((int)s[i]>=49 && (int)s[i]<=58)
		{
			count=(int)s[i]-48;
			continue;
		}
	}
	for(j=0;j<count;j++)
	{
		printf("%s",s[j]);
	}
	count=1;
	for(i=0;i<n;i++)
	{
	printf("String: %s",s);
	}
}
