#include <stdio.h>

int main()
{
    int n, counter = 0, i;
    char k;

    scanf("%d %c", &n, &k);

    if (n <= 0 || (k < 'a' || k > 'z'))
    {
        printf("Wrong Input");
        return -1;
    }

    for (i = 1; i <= n; i++)
    {
        printf("%c", k);
        counter++;

        if (counter == 5 && i != n)
        {
            printf(" ");
            counter = 0;
        }

        if (i == n)
        {
            printf(".");
        }
    }

    return 0;
}