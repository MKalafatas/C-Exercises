#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, rem = 0, binary_num = 0, power = 0;
    scanf("%d", &num);

    if (num < 0 || num > 31)
    {
        printf("Wrong Input");
        return -1;
    }

    while (num > 0)
    {
        rem = num % 2;
        int temp = pow(10, power);
        binary_num += rem * temp;
        power++;
        num /= 2;
    }
    printf("%d", binary_num);
}