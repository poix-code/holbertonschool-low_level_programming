#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array int.
 * @width: defines the width of the string.
 * @height: defines the height of the string.
 * Return: the dimension of the string.
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j, _free;

	if (width <= 0 || height <= 0)
		return (0);
	array = malloc(height * sizeof(int *));
	if (array == '\0')
		return (0);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == '\0')
			return (0);
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	for (_free = 0; _free < height; _free++)
	{
		free(array[i]);
	}
	return (array);
}
