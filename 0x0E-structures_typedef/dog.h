
#ifndef DOG
#define DOG

/**
 * struct dog - dog
 *@name: char *
 *@age: char *
 *@owner: char *
 * Return: Always 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);