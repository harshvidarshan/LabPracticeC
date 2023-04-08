/* 1
   2 3
   3 4 5 6
   4 5 6 7 */
#include <stdio.h>
int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        k = i;

        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
}
}

