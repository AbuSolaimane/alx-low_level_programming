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
	int r = a % 10;
	_putchar(r + '0');
	return (r);
}
