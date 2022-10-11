#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - print alphabet
 *@name:size
 *@age:size
 *@owner:size
 * Return:void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
