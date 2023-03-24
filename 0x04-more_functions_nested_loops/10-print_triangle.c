#include "main.h"

/**
 * print_triangle - function
 *
 * @n: parameter
 */
void print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			_putchar(' ');
		for (k = n - i + 1; k <= n; k++)
			_putchar('#');
		_putchar('\n');
	}
}
