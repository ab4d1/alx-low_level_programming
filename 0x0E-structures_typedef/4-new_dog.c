#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *name_copy;
	char *owner_copy;
	unsigned int i = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	name_copy = malloc(sizeof(char) * strlen(name));
	if ((name_copy) == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < strlen(name); i++)
		name_copy[i] = name[i];
	dog->name = name_copy;
	dog->age = age;
	owner_copy = malloc(sizeof(char) * strlen(owner));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < strlen(owner); i++)
		owner_copy[i] = owner[i];
	dog->owner = owner_copy;
	return (dog);
}
