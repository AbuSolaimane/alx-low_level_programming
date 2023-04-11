#include <stdlib.h>
#include <string.h>
/**
 * create_array - function
 *
 * @str: parameter
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	return (ptr);
}
