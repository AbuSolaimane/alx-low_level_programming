#include "main.h"

/**
 * times_table - function
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		int l = 0;

		for (j = 0; j <= 9; j++)
		{
			_putchar(l + '0');
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			l += i;
		}
	}
}
