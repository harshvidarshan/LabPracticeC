#include <stdio.h>

void main()
{
    int i,power=1,y,x;
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        power=power*x;
    }
    printf("ans:%d",power);
}
