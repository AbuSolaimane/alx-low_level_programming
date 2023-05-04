#include "main.h"

/**
 * print_binary - function
 *
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		printf("%lu", n);
		return;
	}
	print_binary(n / 2);
	printf("%lu", n % 2);
}
