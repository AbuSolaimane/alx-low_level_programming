#include "main.h"

/**
 * print_binary - function
 *
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shift = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n; (temp = temp >> 1) > 0; shift++)
		;
	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
