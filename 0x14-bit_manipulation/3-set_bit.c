#include "main.h"

/**
 * set_bit - function
 *
 * @n: parameter
 *
 * @index: param
 *
 * Return: return
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((1 << index) | *n);
}
