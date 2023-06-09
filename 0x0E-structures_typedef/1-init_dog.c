#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function
 * @d: the dog
 *
 * @name: the name
 *
 * @age: the age
 *
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit(EXIT_FAILURE);
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
