#include <string.h>
#include <stdio.h>
/**
 * puts_half - function
 *
 * @str: parameter
 */
void puts_half(char *str)
{
	int i, len, n;

	len = strlen(str);
	n = (strlen(str) + 1) / 2;

	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
