#include <stdio.h>

int combination(int n, int s, int i, int sum)
{
    if (n == 0)
    {
        return (sum == s);
    }

    if (i > 9)
    {
        return 0;
    }
    return combination(n - 1, s, i, sum + i) + combination(n, s, i + 1, sum);
}

int main()
{
    int n, s;
    scanf("%d%d", &n, &s);
    printf("%d", combination(n, s, 1, 0));
    return 0;
}