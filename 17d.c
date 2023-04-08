//transpose of matrix
#include<stdio.h>
void main()
{
	int a[10][10],n,m,i,j;
	printf("Enter size of row: \n");
	scanf("%d",&n);//row
	printf("Enter size of column: \n");
	scanf("%d",&m);//column
	printf("Enter elements of array: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("User entered matrix elements are: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(":a[%d][%d]:%d\n",i,j,a[i][j]);
		}
	}
	printf("\nTranspose Array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:%d\n",j,i,a[j][i]);
		}
	}
	
}
