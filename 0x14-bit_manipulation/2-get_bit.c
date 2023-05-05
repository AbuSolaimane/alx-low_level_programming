#include "main.h"

/**
 * get_bit - function
 *
 * @n: parameter
 *
 * @index: parameter2
 *
 * Return: return
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
