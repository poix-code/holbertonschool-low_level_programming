#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  print the values based on a format.
 * @d: pointer to the struct.
 *
 * Return: Void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
