#include "main.h"
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

/**
 * array_range - creates an array of integers ordered from min to max
 * @min: starting value (inclusive)
 * @max: ending value (inclusive)
 *
 * Return: pointer to newly allocated array, or NULL on failure
 */
int *array_range(int min, int max)
{
    int *arr;
    unsigned int i;
    unsigned long range;

    if (min > max)
        return (NULL);

    range = (unsigned long)max - (unsigned long)min + 1UL;
    if (range > (unsigned long)(SIZE_MAX / sizeof(int)))
        return (NULL);

    arr = malloc(range * sizeof(int));
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < range; i++)
        arr[i] = min + i;

    return (arr);
}
