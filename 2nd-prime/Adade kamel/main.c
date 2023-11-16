#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaring variables
    int n, t=0;

    //Getting input
    scanf("%d", &n);

    //Logic
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            t += i;
        }
    }

    if (n == t) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
