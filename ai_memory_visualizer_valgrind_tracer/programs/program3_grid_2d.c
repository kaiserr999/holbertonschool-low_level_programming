#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid (number of columns)
 * @height: height of the grid (number of rows)
 *
 * Return: pointer to the newly allocated grid, or NULL on failure
 *         or if width or height is <= 0
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    /* allocate row pointers */
    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    /* allocate each row */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            /* free previously allocated rows on failure */
            while (i > 0)
            {
                i--;
                free(grid[i]);
            }
            free(grid);
            return (NULL);
        }

        /* initialize row */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    for (i = 0; i < height; i++)
        free(grid[i]);

    free(grid);
}

/**
 * main - test 2D grid allocation and deallocation
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;
    int i, j;

    printf("Allocating 3x4 grid...\n");
    grid = alloc_grid(4, 3);
    if (grid == NULL)
    {
        printf("Failed to allocate grid\n");
        return (1);
    }

    printf("Grid allocated at: %p\n", (void *)grid);

    /* Set some values */
    grid[0][0] = 1;
    grid[1][2] = 5;
    grid[2][3] = 9;

    printf("Grid contents:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Row %d (%p): ", i, (void *)grid[i]);
        for (j = 0; j < 4; j++)
            printf("%d ", grid[i][j]);
        printf("\n");
    }

    printf("Freeing grid...\n");
    free_grid(grid, 3);
    printf("Grid freed\n");

    return (0);
}
