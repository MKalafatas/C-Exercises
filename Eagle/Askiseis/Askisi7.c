#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    if (n < 0 || n >= 11)
    {
        printf("Wrong Input");
        return -1;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}