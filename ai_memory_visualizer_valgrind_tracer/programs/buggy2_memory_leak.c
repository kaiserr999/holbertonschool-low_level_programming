#include <stdlib.h>
#include <stdio.h>

/**
 * strdup_with_leak - duplicate a string but forget to free it
 * ERROR TYPE: Memory Leak (lost ownership)
 * @str: string to duplicate
 *
 * Return: pointer to new string (but we lose track in certain paths)
 */
char *strdup_with_leak(char *str)
{
    char *dup;
    unsigned int len, i;

    if (str == NULL)
        return (NULL);

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
 * main - create multiple strings but forget to free most of them
 * ERROR: Multiple memory leaks
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s1;
    char *s2;
    char *s3;
    char *original = "Hello";

    printf("Creating strings...\n");
    
    s1 = strdup_with_leak(original);
    printf("s1: %s\n", s1);
    free(s1);  /* This one is freed */

    s2 = strdup_with_leak(original);
    printf("s2: %s\n", s2);
    /* BUG: Forgot to free s2 - MEMORY LEAK */

    s3 = strdup_with_leak(original);
    printf("s3: %s\n", s3);
    /* BUG: Forgot to free s3 - MEMORY LEAK */

    /*
     * At program end:
     * - s2 still points to allocated heap memory (lost ownership)
     * - s3 still points to allocated heap memory (lost ownership)
     * - No way to free them -> definite memory leak
     */

    printf("Program ending with leaked memory...\n");
    return (0);
}
