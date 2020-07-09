#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees all the memory of 2D array.
 * @grid: array with the memory.
 * @height: height.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
