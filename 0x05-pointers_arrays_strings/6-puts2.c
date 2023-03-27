#include <stdio.h>

/**
 * void puts2 - function
 *
 * @str: parameter
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 2)
			putchar(str[i]);
		i++;
	}
}
