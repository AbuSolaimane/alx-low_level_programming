#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function
 *
 * @b: parameter1
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
