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
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
