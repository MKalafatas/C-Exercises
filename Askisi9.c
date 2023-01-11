#include <stdio.h>
#include <stdbool.h>

// int isPrime(int number)
// {
//     int flag=0,i;

//     for(i=2;i<=number/2;i++)
//     {
//         if(number%i==0)
//         {
//             flag=0;
//             break;
//             return flag;
//         }
//     }

// }

// Function to check if a number is prime
bool is_prime(int n)
{
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;

    scanf("%d", &N);

    if (N % 2 != 0 || N <= 2)
    {
        printf("Wrong Input");
        return -1;
    }

    for (int i = 2; i <= N; i++)
    {
        if (is_prime(i) && is_prime(N - i))
        {
            printf("%d+%d=%d", i, N - i, N);
            break;
        }
    }
}
