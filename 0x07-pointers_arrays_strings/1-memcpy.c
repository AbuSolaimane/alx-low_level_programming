/**
 * _memcpy - function
 *
 * @dest: parameter1
 *
 * @src: parameter2
 *
 * @n: parameter3
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
