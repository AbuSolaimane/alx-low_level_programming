#include <ctype.h>

/**
 * string_toupper - function
 *
 * @str: string
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int i;
	
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(str + i) = toupper(*(str + i));
	}

	retrun (str);
}
