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
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
