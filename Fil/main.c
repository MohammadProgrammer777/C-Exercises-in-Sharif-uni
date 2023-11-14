#include <stdio.h>
#include <stdlib.h>

int main()
{
    // برای اینکه حداقل قدم ها را بردار، باید ابتدا بیشترین قدم 5 تایی را بردارد؛ سپس با یک قدم، مسیر باقیمانده را برود.

    // Declaring variables
    int x, t;

    // Getting input
    scanf("%d", &x);

    // Logic
    if (x <= 5) {
        t = 1;
    } else if (x % 5 == 0) {
        t = x / 5;
    } else {
        t = (x / 5) + 1;
    }

    //Printing the output
    printf("%d", t);

    return 0;
}
