#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int x, n;

    //Getting inputs
    scanf("%d", &x);
    scanf("%d", &n);

    //Logic
    if (n == 0) {
        printf("%d", 20);
    } else if (n == 7) {
        printf("%d", x);
    } else {
        if (0 <= (x-n)) {
            printf("%d", (x-n));
        } else {
            printf("%d", 0);
        }
    }

    return 0;
}
