#include <stdio.h>

int main()
{
    int day;
    scanf("%d", &day);

    if (day < 1 || day > 31)
    {
        printf("Wrong Input");
    }
    else
    {
        int day_of__week = day % 7;

        switch (day_of__week)
        {
        case 0:
            printf("Sunday");
            break;

        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;
        }
    }
}
