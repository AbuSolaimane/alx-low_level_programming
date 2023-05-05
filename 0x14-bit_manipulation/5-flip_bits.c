#include "main.h"

/**
 * flip_bits - function
 *
 * @n: param1
 *
 * @m: param2
 *
 * Return: return
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int counter = 0;

	while (xor)
	{
		if (xor & 1)
			counter++;
		xor >>= 1;
	}
	return (counter);
}
