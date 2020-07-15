#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - The function prints a name.
 * @name: string to print.
 * @f: pointer to function.
 *
 * Return:  void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	f(name);
}
