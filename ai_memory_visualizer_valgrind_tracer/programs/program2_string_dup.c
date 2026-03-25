#include <stdlib.h>
#include <stdio.h>

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

/**
 * main - test string duplication
 *
 * Return: Always 0.
 */
int main(void)
{
    char *original = "Hello World";
    char *copy1;
    char *copy2;

    printf("Original string address: %p\n", (void *)original);
    printf("Original string: %s\n", original);

    copy1 = _strdup(original);
    printf("Copy1 address: %p\n", (void *)copy1);
    printf("Copy1 string: %s\n", copy1);

    copy2 = _strdup(copy1);
    printf("Copy2 address: %p\n", (void *)copy2);
    printf("Copy2 string: %s\n", copy2);

    free(copy1);
    printf("Copy1 freed\n");

    free(copy2);
    printf("Copy2 freed\n");

    return (0);
}
