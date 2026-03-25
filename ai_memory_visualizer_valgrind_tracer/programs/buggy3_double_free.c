#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * grid_with_bug - allocate 2D grid but have an error in deallocation
 * ERROR: Partial deallocation + invalid memory access
 */
int **grid_with_bug(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            while (i > 0)
            {
                i--;
                free(grid[i]);
            }
            free(grid);
            return (NULL);
        }

        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}

/**
 * bad_free_grid - intentionally buggy deallocation
 * ERROR: Double-free or use-after-free
 */
void bad_free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
    free(grid);  /* BUG: Double-free! */
}

/**
 * main - demonstrate double-free bug
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;
    int i, j;

    printf("Allocating grid...\n");
    grid = grid_with_bug(3, 2);
    if (grid == NULL)
    {
        printf("Failed to allocate grid\n");
        return (1);
    }

    printf("Setting values...\n");
    grid[0][0] = 1;
    grid[0][1] = 2;
    grid[1][1] = 5;

    printf("Grid contents:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", grid[i][j]);
        printf("\n");
    }

    printf("Freeing grid (with bug)...\n");
    bad_free_grid(grid, 2);  /* BUG: Will double-free */

    printf("After free (this may crash on next malloc)...\n");
    return (0);
}
