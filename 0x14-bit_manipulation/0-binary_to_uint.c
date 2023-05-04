#include "main.h"

/**
 * binary_to_uint - function
 *
 * @b: parameter
 *
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	while (*b != '\0')
	{
		result *= 2;
		if (*b == '1')
			result += 1;
	}
	return (result);
}
