#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function
 *
 * @str: parameter
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	ptr = (char *) malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	return (ptr);
}
