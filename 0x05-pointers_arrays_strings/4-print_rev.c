#include <string.h>
#include "main.h"

/**
 * print_rev - function
 *
 * @s: paarmeter
 */
void print_rev(char *s)
{
	int i;
	for (i = strlen(s) - 2; i >= 0; i--)
	{
		_putchar(i);
	}

	_putchar('\n');
}
