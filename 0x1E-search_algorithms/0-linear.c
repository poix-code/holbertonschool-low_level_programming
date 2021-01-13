#include "search_algos.h"
/**
 * linear_search - search a value using Linear search algorithm.
 * @array: Array to be traversed.
 * @size: Size of the array.
 * @value: Value to be found.
 * Return: If value is not present or array is NULL, return '-1';
 *         else return the index at the moment and the value.
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array || size == 0)
		return (-1);
	for (; array[i]; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
