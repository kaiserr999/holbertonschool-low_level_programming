#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space containing
 *           a duplicate of the string given as parameter
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL or
 *         if memory allocation fails
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int len, i;

    if (str == NULL)
        return (NULL);

    /* calculate length including terminating null byte */
    len = 0;
    while (str[len] != '\0')
        len++;

    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        dup[i] = str[i];

    return (dup);
}
