#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function
 *
 * @b: parameter1
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		return (98);

	return ptr;
}
