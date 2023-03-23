#include "main.h"

/**
 * print - function
 *
 * @a: nuber to print
 */
void print (int a)
{
	if (a >= 10)
		print(a / 10);
	_putchar('0' + (a % 10));
}

/**
 * more_numbers - function
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			print(j);
		}
		_putchar('\n');
	}
}
