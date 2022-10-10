#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print alphabet
 *@d:size
 * Return:void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", ((d->name == NULL) ? "(nil)" : d->name));
	printf("Age: %s\n", ((d->age == 0) ? "(nil)" : d->age));
	printf("Owner: %s\n", ((d->owner == NULL) ? "(nil)" : d->owner));
}
