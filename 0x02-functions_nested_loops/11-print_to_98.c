#include "main.h"

/**
 * print - function
 *
 * @i: parameter
 */
void print(int i)
{
	if (i < 0)
		i = i * -1;
	if (i >= 10)
		print(i / 10);

	_putchar('0' + (i % 10));
}

/**
 * print_to_98 - function
 *
 * @n: parameter
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 0)
			_putchar('-');
		print(i);
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	for (i = n; i > 98; i--)
	{
		print(i);
		_putchar(',');
		_putchar(' ');
	}
	if (n > 98)
		print(98);
	_putchar('\n');
}
