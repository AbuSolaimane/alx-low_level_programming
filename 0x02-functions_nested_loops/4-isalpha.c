#include<ctype.h>

/**
 * _isalpha - function
 *
 * @c: parameter
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return (isalpha(c) != 0 ? 1 : 0);
}
