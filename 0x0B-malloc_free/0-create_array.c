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
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
