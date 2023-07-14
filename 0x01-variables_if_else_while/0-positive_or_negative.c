#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));                          /* Initialize random seed */

    int n = rand() % RAND_MAX;                /* Generate a random number */

    printf("The number %d", n);

    if (n > 0)
    {
        printf(" is positive\n");
    }
    else if (n == 0)
    {
        printf(" is zero\n");
    }
    else
    {
        printf(" is negative\n");
    }

    return 0;
}

