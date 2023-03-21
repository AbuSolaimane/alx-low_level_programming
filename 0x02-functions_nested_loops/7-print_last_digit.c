#include "main.h"
#include <limits.h>

/**
 * print_last_digit - function
 *
 * @a: parameter
 *
 * Return: return
 */
int print_last_digit(int a)
{
	int r;

	if (a == INT_MIN)
		a = 88;
	if (a < 0)
		a = a * -1;
	r = a % 10;
	_putchar('0' + r);
	return (r);
}
