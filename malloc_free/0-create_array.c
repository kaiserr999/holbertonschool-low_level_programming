#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with c
 * @size: number of elements in the array
 * @c: character to initialize each element with
 *
 * Return: pointer to the newly allocated array, or NULL on failure
 *         or if size is 0
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
        return (NULL);

    arr = malloc(size * sizeof(char));
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = c;

    return (arr);
}
