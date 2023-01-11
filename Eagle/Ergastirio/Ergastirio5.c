#include <stdio.h>
#include <math.h>

int main()
{
    int N, sum = 0;

    scanf("%d", &N);

    if (N < 2 || N > 100000)
    {
        printf("Wrong Input");
        return -1;
    }

    int A[N], B[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);

        if (A[i] < 0 || A[i] > 1000000000)
        {
            printf("Wrong Input");
            return -1;
        }

        sum += A[i];
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &B[i]);

        if (B[i] < 0 || B[i] > 1000000000 || A[i] > B[i])
        {
            printf("Wrong Input");
            return -1;
        }
    }

    for (int i = 0; i < N - 1; i++)
    {

        for (int j = i + 1; j < N; j++)
        {

            if (B[i] + B[j] >= sum)
            {
                printf("Yes\n");
                return -1;
            }
        }
    }

    printf("No");
}
