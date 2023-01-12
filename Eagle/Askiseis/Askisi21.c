#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int *ptr;

    scanf("%d", &N);

    if (N < 0 || N > 100)
    {
        printf("Wrong Input");
        return -1;
    }

    ptr = (int *)calloc(N, sizeof(int));

    /*Epidi to megethos tou pinaka allazei kata tin diarkeia tou programatos kai tha prepei na koitkasoume to kathe stoixeio tou telikou pinaka
      me autin tin metabliti kratame tin ananeomeni timi tou pinaka */

    int arraySize = N;

    if (ptr == NULL)
    {
        printf("Memory not created!!");
        exit(0);
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", (ptr + i));
    }

    char chr;

    while (1)
    {
        scanf("%c", &chr);

        if (chr == 'q')
        {
            break;
        }

        else if (chr == 'a')
        {
            arraySize += 1;

            ptr = (int *)realloc(ptr, (arraySize * sizeof(int)));

            scanf("%d", &ptr[arraySize - 1]); // vazoume timi sto teleuteo stoxeio
        }

        else if (chr == 'd')
        {
            int p;
            scanf("%d", &p);

            /* Ksekiname apo tin thesi tou stoixeiou pou theloume na aferesoume kai anathetoume tin timi tou stoixeiou apta deksia tou
            epanalamvanoume mexri na ftasoume sto telos tou pinaka kai meionoume to megethous tou pinaka kata 1*/
            for (int i = p; i < arraySize - 1; i++)
            {
                ptr[i] = ptr[i + 1];
            }

            arraySize -= 1;

            ptr = (int *)realloc(ptr, (arraySize * sizeof(int)));
        }

        else if (chr == 'i')
        {
            int k, p;
            scanf("%d%d", &k, &p);

            arraySize += 1;
            ptr = (int *)realloc(ptr, (arraySize * sizeof(int)));

            /* Gia 4 1 : [1, 2, 3]  =>   [1, 2, 3, ] => [1, 2, 3, 3] => [1, 2, 2, 3] => [1, 4, 2, 3]  */
            /* Auksanoume to megethos tou pinaka kata 1
             Ksekiname apto teleutaio stoxeio kai antigrafoume se auto tin timi tou stoxeiou apo ta aristera tou
            otan antigrapsoume kai to target stoxeio mporoume na thesoume stin thesi p tin kainouria timi */

            for (int i = arraySize - 1; i > p; i--)
            {
                ptr[i] = ptr[i - 1];
            }

            ptr[p] = k;
        }
    }

    for (int i = 0; i < arraySize; i++)
    {
        printf("%d\n", *(ptr + i));
    }
}