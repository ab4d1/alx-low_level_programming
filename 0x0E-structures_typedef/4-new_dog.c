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
	unsigned int i = 0;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * strlen(name));
	if ((dog->name) == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < strlen(name); i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	dog->owner = malloc(sizeof(char) * strlen(owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < strlen(owner); i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);
}
