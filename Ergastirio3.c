#include <stdio.h>
#include <math.h>

int main()
{
    int N, sum = 0, last_digit, digits = 0, temp, j;

    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Wrong Input");
        return -1;
    }

    temp = N; // bug me mono temp=N;

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    printf("%d\n", digits);

    temp = N;

    while (temp > 0)
    {
        last_digit = temp % 10;
        sum += pow(last_digit, digits);
        temp /= 10;
    }

    if (sum == N)
        printf("yes");
    else
        printf("no");
}