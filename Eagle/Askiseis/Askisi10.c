#include <stdio.h>

int main()
{
    long long int N;
    int max, min, lastDigit;

    scanf("%lld", &N);

    if (N <= 0)
    {
        printf("Wrong Input");
        return -1;
    }

    max = min = N % 10;

    do
    {
        lastDigit = N % 10;
        if (lastDigit > max)
        {
            max = lastDigit;
        }
        else if (lastDigit < min)
        {
            min = lastDigit;
        }

        N /= 10;

    } while (N > 0);

    printf("%d %d", min, max);
}