#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int t;

    //Getting input
    scanf("%d", &t);

    //Logic
    if (t < 0) {
        printf("Ice");
    } else if (0 <= t && t <= 100) {
        printf("Water");
    } else {
        printf("Steam");
    }

    return 0;
}
