#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to free a 2-dimensional array
 * @grid: pointer to a pointer to the array
 * @height: height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}
