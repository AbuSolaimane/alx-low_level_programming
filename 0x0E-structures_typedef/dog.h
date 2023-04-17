#ifndef DOG
#define DOG

/**
 * struct dog - struct to represent dog
 *
 * @name: his name
 *
 * @age: his age
 *
 * @owner: his owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
