#include <ctype.h>

/**
 * _isdigit - function
 *
 * @c: parameter
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	return (isdigit(c) == 0 ? 0 : 1);
}
