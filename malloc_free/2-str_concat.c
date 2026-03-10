#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a new allocated space
 * @s1: first string (may be NULL treated as "")
 * @s2: second string (may be NULL treated as "")
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *res;
    unsigned int len1 = 0, len2 = 0, i, j;

    if (s1)
    {
        while (s1[len1])
            len1++;
    }
    if (s2)
    {
        while (s2[len2])
            len2++;
    }

    res = malloc(len1 + len2 + 1);
    if (res == NULL)
        return (NULL);

    /* copy s1 */
    for (i = 0; i < len1; i++)
        res[i] = s1[i];
    /* copy s2 */
    for (j = 0; j < len2; j++)
        res[i + j] = s2[j];
    res[i + j] = '\0';

    return (res);
}