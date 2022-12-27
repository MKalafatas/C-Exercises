#include <string.h>

// pass pointer to array as argument so that we can mutate it
void anonymize(char *array)
{
    int i = 0;
    // until we find the terminating character
    while (array[i] != '\0')
    {
        array[i] = '*';
        i++;
    }
}

void createString(int k, char a, char b, char *s)
{
    // create new array with space for null character
    char newArray[k + 1];
    // array with characters that will be alternating
    char replaceArray[2] = {a, b};

    // fill array with alternating chars
    for (int i = 0; i < k; i++)
    {
        newArray[i] = replaceArray[i % 2];
    }
    // add null char
    newArray[k] = '\0';

    // new string into target string
    strcpy(s, newArray);
}