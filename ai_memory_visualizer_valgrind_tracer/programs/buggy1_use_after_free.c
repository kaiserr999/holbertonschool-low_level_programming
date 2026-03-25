#include <stdlib.h>
#include <stdio.h>

/**
 * create_array_buggy - creates an array with intentional memory error
 * ERROR TYPE: Use-After-Free
 * @size: number of elements
 * @c: character to initialize
 *
 * Return: pointer to array (freed immediately - this is the bug)
 */
char *create_array_buggy(unsigned int size, char c)
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

    free(arr);  /* BUG: Free the array before returning! */
    return (arr);  /* BUG: Return pointer to freed memory (dangling pointer) */
}

/**
 * main - test use-after-free
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    unsigned int i;

    printf("Attempting to use freed memory...\n");
    str = create_array_buggy(5, 'A');
    
    if (str != NULL)  /* BUG: str points to freed memory */
    {
        printf("Array contents: ");
        for (i = 0; i < 5; i++)
            printf("%c", str[i]);  /* BUG: Reading from freed memory */
        printf("\n");
    }

    return (0);
}
