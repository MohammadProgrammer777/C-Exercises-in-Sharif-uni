#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int n;

    //Getting input
    scanf("%d", &n);

    //Logic
    printf("I hate");

    while(n>1){
        printf(" that I love");
        n--;

        if(n>1){
            printf(" that I hate");
            n--;
        }
    }

    printf(" it");

    return 0;
}
