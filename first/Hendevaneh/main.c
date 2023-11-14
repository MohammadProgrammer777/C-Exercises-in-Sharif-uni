#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int weight;

    // Getting input
    scanf("%d", &weight);

    // Logic
    if (weight % 2 == 0 && weight != 2) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
