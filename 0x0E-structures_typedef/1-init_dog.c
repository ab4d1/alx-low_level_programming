#include <stdio.h>
#include "dog.h"

/**
 * init_dog - print alphabet
 *@d:size
 *@name:char
 *@age:char
 *@owner:char
 * Return:void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
