/*  1
	23
	456 */
#include<stdio.h>
void main()
{
    int i, j, k, N;
    printf("Enter N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            printf("%d ", k);
        }
    printf("\n");
}
}
