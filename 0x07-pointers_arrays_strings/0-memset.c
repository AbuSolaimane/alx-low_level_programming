#include <string.h>
/**
 * _memset - function
 *
 * @s: parameter1
 *
 * @b: parameter2
 *
 * @n: parameter3
 *
 * Return: return
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
