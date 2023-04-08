//sum of first and last digit 
/*#include <stdio.h>
int swap(int,int);
void main()
{
    int i,first,last,n,m,sum,temp;
    printf("n: ");
    scanf("%d",&n);
   	for(i=1;i<=n;i++)
   	{
   		last=n%10;	
	 }
    printf("last:%d",last);
    while(first>n)
    {
    	first=first/10;
	}
	printf("\nfirst:%d",first);
	/*for(i=1;i<=n;i++)
	{
	  m=swap(&first,&last);
	}
	printf("\n after :%d",m);
}
int swap(int first, int last)	
{
	int temp,i,n;
	for(i=1;i<=n;i++)
	{
		temp=first;
		first=last;
		last=temp;
	}
	
}*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,firstDigit, lastDigit,digits, swappedNum;
    printf("Enter number = ");
    scanf("%d", &n);
    //Find last digit of a number
    lastDigit = n % 10;
    //Find total number of digits - 1
    digits    = (int)log10(n);
    //Find first digit
    firstDigit = (int) (n / pow(10, digits));
    swappedNum  = lastDigit;
    swappedNum *= (int) round(pow(10, digits));
    swappedNum += n % ((int)round(pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    printf("Number after swapping first and last digit: %d", swappedNum);
    return 0;
}
