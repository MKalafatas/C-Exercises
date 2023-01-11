#include <stdio.h>

int main()
{
    int length, width;

    scanf("%d%d", &length, &width);

    if ((length < 2 || length > 13) || (width >= 1 && width > length / 2) || (length < width) || width <= 0)
    {
        printf("Wrong Input");
        return -1;
    }

    // i<=w i>=N-w
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            // Όταν εκτυπωνουμε χαρακτήρα του πάχους
            int isInTopRows = i < width;
            int isInLastRows = i >= length - width;
            int isInStartingColumns = j < width;
            int isInLastColumns = j >= length - width;

            if (isInTopRows || isInLastRows || isInStartingColumns || isInLastColumns)

                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}