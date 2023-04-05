#include <stdio.h>
/**
 * _puts_recursion - function
 *
 * @s: parameter
 */
void _puts_recursion(char *s)
{
	if (*s == '')
		printf("\n");
	else
	{
		printf("%c", *s);
		_puts_recursion(++s);
	}
}
