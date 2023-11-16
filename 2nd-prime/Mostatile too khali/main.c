#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int width, height;

    //Getting inputs
    scanf("%d %d", &width, &height);

    //Logic and output
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if (i == 1 || i == height) {
                printf("*");
            } else {
                if (j == 1 || j == width) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
