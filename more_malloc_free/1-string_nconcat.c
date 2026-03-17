#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: number of characters in s
 */
static unsigned int _strlen(char *s)
{
    unsigned int i = 0;

    while (s && s[i])
        i++;
    return (i);
}

/**
 * string_nconcat - concatenates two strings into newly allocated memory
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1, len2, copy_len, i, j;
    char *result;

    len1 = _strlen(s1);
    len2 = _strlen(s2);
    copy_len = (n >= len2) ? len2 : n;

    result = malloc(len1 + copy_len + 1);
    if (result == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    for (j = 0; j < copy_len; j++)
        result[len1 + j] = s2[j];

    result[len1 + copy_len] = '\0';

    return (result);
}
