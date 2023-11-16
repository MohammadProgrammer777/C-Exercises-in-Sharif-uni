#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int a, b;
    int a_sadgan, a_dahgan, a_yekan, b_sadgan, b_dahgan, b_yekan;

    //Getting inputs
    scanf("%d\n%d", &a, &b);

    //Logic and output
    a_sadgan = a / 100;
    a_dahgan = (a - a_sadgan*100) / 10;
    a_yekan = a % 10;
    b_sadgan = b / 100;
    b_dahgan = (b - b_sadgan*100) / 10;
    b_yekan = b % 10;

    if (a_yekan != b_yekan) {
        if (a_yekan < b_yekan) {
            printf("%d < %d", a, b);
        } else {
            printf("%d < %d", b, a);
        }
    } else if (a_dahgan != b_dahgan) {
        if (a_dahgan < b_dahgan) {
            printf("%d < %d", a, b);
        } else {
            printf("%d < %d", b, a);
        }
    } else {
        if (a_yekan == b_yekan) {
            printf("%d = %d", a, b);
        } else if (a_yekan < b_yekan) {
            printf("%d < %d", a, b);
        } else {
            printf("%d < %d", b, a);
        }
    }

    return 0;
}
