#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to array of numbers.
 * @size: the size of the array.
 * @cmp: pointer to the function.
 * Return: if not match elements return -1, if matches
 * return the index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == '\0' || (*cmp) == '\0' || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
