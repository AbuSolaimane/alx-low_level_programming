#include <stdlib.h>
/**
 * create_array - function
 *
 * @size: the size of the array
 *
 * @c: the character
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));
	ptr[0] = c;
	return (ptr);
}
