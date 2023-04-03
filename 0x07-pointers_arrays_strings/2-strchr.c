/**
 * _strchr - function
 *
 * @s: parameter1
 *
 * @c: parameter2
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != c )
	{
		s++;
	}
	return (s);
}
