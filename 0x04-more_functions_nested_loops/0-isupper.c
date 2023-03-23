#include <ctype.h>

/**
 * _isupper - function
 *
 * @c: parameter
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	return (isupper(c) == 0 ? 0 : 1);
}
