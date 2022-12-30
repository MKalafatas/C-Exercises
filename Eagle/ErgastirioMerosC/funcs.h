#include <stdio.h>
#include <stdlib.h>

int *dividedBy(int a, int b, int d, int *n)
{
    int *ptr = malloc((b - a) * sizeof(int));
    int divisors = 0;

    for (int i = a; i <= b; i++)
    {

        if (i % d == 0)
        {
            ptr[divisors] = i;
            divisors++;
        }
    }

    *n = divisors;

    return ptr;
}