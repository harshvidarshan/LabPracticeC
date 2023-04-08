#include <stdio.h>
void goodnums(int);
void badnums(int);
int main(void)
{
    int num;

    printf("Enter a two digit number: ");
    scanf("%d",&num);
    if(num>10 && num<20){
    badnums(num);
    }
    else{
    goodnums(num);
    }
    return 0;
}
void badnums(int num){
//handle the numbers here 11-19
}

void goodnums(int num){
switch(num / 10) {
        case 0: break;
        case 1: printf("ten"); break;
        case 2: printf("twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
       }
        switch(num % 10) {
        case 0: break;
        case 1: printf(" one"); break;
        case 2: printf(" two"); break;
        case 3: printf(" three"); break;
        case 4: printf(" four"); break;
        case 5: printf(" five"); break;
        case 6: printf(" six"); break;
        case 7: printf(" seven"); break;
        case 8: printf(" eight"); break;
        case 9: printf(" nine"); break;
    }
}
