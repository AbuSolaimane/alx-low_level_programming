/**
 * _strncat - function
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number
 *
 * Return: value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *result = dest;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0' && j < n; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}

	*(dest + i) = '\0';

	return (result);
}
