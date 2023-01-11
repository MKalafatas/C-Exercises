#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int binary_num, counter = 0, decimal_num = 0, rem = 0, base = 1;
    scanf("%d", &binary_num);

    if (binary_num <= 0)
    {
        printf("Wrong Input");
        return -1;
    }

    while (binary_num > 0)
    {
        counter += 1;
        rem = binary_num % 10;

        if ((rem == 0 || rem == 1) && counter < 6)
        {

            decimal_num += rem * base;
            binary_num /= 10;
            base *= 2;
        }
        else
        {
            printf("Wrong Input");
            return -1;
        }
    }
    printf("%d", decimal_num);
}
