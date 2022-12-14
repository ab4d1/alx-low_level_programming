
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

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
