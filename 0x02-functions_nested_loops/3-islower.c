#include<ctype.h>

/**
 * _islower - check if c is lowerCase
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	return (islower(c) != 0 ? 1 : 0);
}
