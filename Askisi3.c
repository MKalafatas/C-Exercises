#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int aem;
    scanf("%d", &aem);

    if (aem <= 0)
    {
        printf("Wrong Input");
        return -1;
    }
    printf("C%d", (aem % 3 + 1));
}