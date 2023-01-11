#include <stdio.h>
#include <math.h>

int populateArray(int *p, int N)
{

    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &p[i]);

        if (p[i] < 0 || p[i] > 1000000000)
        {
            printf("Wrong Input");
            return -1;
        }

        sum += p[i];
    }

    return sum;
}

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

    sum = populateArray(A, N);

    populateArray(B, N);

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
