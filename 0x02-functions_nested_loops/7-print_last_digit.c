#include "main.h"

/**
 * print_last_digit - function
 *
 * @a: parameter
 *
 * Return: return
 */
int print_last_digit(int a)
{
	if (a < 0)
		a = a * -1;
	int r = a % 10;

	_putchar('0' + r);
	return (r);
}
