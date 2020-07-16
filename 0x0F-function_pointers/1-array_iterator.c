#include "function_pointers.h"

/**
 * array_iterator - Print each element of an array.
 * @array: array of integers.
 * @size: size of the array.
 * @action: point to the function.
 *
 * Return:  void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
		
}
