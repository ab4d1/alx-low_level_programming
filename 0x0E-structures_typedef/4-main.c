#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

	my_dog = new_dog("Ghost", 4.75, "Jon Snow");
    printf("My name is %s, and I am %.2f :) - Woof!, %s\n", my_dog->name, my_dog->age, my_dog->owner);
    return (0);
}