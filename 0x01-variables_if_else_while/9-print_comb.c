#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: always return 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);

		if (i == 9)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
