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
	int ch, j;

	for (ch = 0; ch <= 9; ch++)
	{
		for (j = ch + 1; j <= 9; j++)
		{
			putchar(ch);
			putchar(j);
			if (ch == 8 && j == 9)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
