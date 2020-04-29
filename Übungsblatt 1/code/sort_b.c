#include <stdio.h>
#include <limits.h>

void exchange(int *i1, int *i2, int *min)
{
    if (*i1 < *i2)
    {
        if (*i1 < *min)
            *min = *i1;
    }
    else
    {
        if (*i1 < *min)
            *min = *i2;
        int tmp = *i1;
        *i1 = *i2;
        *i2 = tmp;
    }
}

int main()
{
	int var = INT_MAX;
	int *min = &var;
	int array[10] = {4, 6, 2, 0, 9, 1, 5, 7, 8, 3};
	int anz = sizeof(array) / sizeof(*array); // Array length

    for (int i = 0; i < anz; ++i)
    {
        for (int j = i + 1; j < anz; ++j)
            exchange(&array[i], &array[j], min);
    }

    printf("Die Zahlen in sortierter Reihenfolge:");
    for (int i = 0; i < anz; ++i)
        printf(" %i", array[i]);

    printf("\nDas Minimum: %i\n", *min);

    return 0;
}
