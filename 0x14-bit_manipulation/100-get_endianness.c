#include "main.h"

/**
 * get_endianness - function
 * 
 * Return: 0 or
 */
int get_endianness(void)
{
	int numero = 1;

	if (*(char *)&numero == 1)
		return (1);
	else
		return (0);
}

