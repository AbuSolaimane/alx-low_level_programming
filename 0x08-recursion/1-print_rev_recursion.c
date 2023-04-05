#include <stdio.h>

/**
 * _print_rev_recursion - function
 *
 * @s: parameter1
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(++s);
	printf("%c", *s);
}
