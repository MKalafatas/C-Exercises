#include <stdio.h>

int main()
{
    int num, counter = 0;

    scanf("%d", &num);

    int divisors[num];

    if (num < 0)
    {
        printf("Wrong Input");
        return -1;
    }

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            divisors[counter] = i;
            counter++;
        }
    }

    // for (int i = 0; i < counter; i++)
    // {
    //     printf("%d \n ", divisors[i]);
    // }

    printf("%d", counter);
}