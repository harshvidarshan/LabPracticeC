#include<stdio.h>  
#include<conio.h>  
void main()  
{  
// declare and initialize the variables  
int num, rem, sum = 0, i;  
// take an input from the user.  
printf("Enter a number\n");  
scanf("%d", &num);      
// find all divisors and add them  
for(i = 1; i < num; i++)  
                     {  
                               
                             if ( num % i == 0)  
                                        {  
                                               sum = sum + i;  
                                        }  
                        }  
if (sum == num)  
                      printf(" %d is a Perfect Number",num);  
           else  
                      printf("\n %d is not a Perfect Number",num);  
getch();  
}  