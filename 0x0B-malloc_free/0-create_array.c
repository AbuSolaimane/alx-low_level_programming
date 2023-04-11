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
	int i;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
