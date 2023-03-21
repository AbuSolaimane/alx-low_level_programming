#include "main.h"

/**
 * times_table - function
 */
void print(int a)
{
	if(a >= 10)
		print(a / 10);
	
	_putchar('0' + (a % 10));
}
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		int l = 0;

		for (j = 0; j <= 9; j++)
		{
			print(l);
			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				if (l < 10)
					_putchar(' ');
				_putchar(' ');
			}
			l += i;
		}
	}
}
