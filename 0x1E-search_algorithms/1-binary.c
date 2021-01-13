#include "search_algos.h"
/**
 * binary_search - Search a value using Binary search algorithm.
 * @array: array to search it.
 * @size: size of the array.
 * @value: value to be searched.
 * Return: If value is not present or array is NULL, return '-1';
 *         else return the index at the moment and the value.
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0, left = 0, right = size - 1, half;

	if (!array || size == 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		half = left + ((right - left) / 2);
		if (array[half] == value)
			return (half);
		else if (array[half] > value)
			right = half - 1;
		else
			left = half + 1;
	}
	return (-1);
}
