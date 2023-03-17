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
	for(char i = '0'; i < '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar(9);
	putchar('\n');
	return (0);
}
