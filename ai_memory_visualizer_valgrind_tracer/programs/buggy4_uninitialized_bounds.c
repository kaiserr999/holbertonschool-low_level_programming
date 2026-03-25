#include <stdlib.h>
#include <stdio.h>

/**
 * read_uninitialized - intentionally read from uninitialized memory
 * ERROR TYPE: Use of uninitialized memory
 */
int read_uninitialized(void)
{
    char *arr;
    int sum = 0;
    unsigned int i;

    /* Allocate but don't initialize */
    arr = malloc(10 * sizeof(char));
    if (arr == NULL)
        return (-1);

    printf("Reading uninitialized memory:\n");
    
    /* BUG: arr contains garbage values, not initialized */
    for (i = 0; i < 10; i++)
    {
        printf("arr[%u] = %d (uninitialized!)\n", i, (int)arr[i]);
        sum += (int)arr[i];  /* BUG: Summing garbage values */
    }

    printf("Sum of garbage: %d\n", sum);

    free(arr);
    return (sum);
}

/**
 * write_past_bounds - intentionally write past allocated boundary
 * ERROR TYPE: Invalid write (heap buffer overflow)
 */
void write_past_bounds(void)
{
    char *buf;
    int i;

    buf = malloc(5 * sizeof(char));
    if (buf == NULL)
        return;

    printf("Writing past allocated bounds:\n");
    
    /* Allocated only 5 bytes, but write 10 */
    for (i = 0; i < 10; i++)
    {
        buf[i] = 'A';  /* BUG: Overflow at i >= 5 */
        printf("Written buf[%d]\n", i);
    }

    free(buf);
}

/**
 * main - demonstrate uninitialized reads and out-of-bounds writes
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("=== Test 1: Reading uninitialized memory ===\n");
    read_uninitialized();

    printf("\n=== Test 2: Writing past heap bounds ===\n");
    write_past_bounds();

    printf("\nProgram complete\n");
    return (0);
}
