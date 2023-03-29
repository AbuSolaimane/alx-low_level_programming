/**
 * _strcat - function
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: value
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char *result = dest;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}

	*(dest + i) = '\0';

	return (result);
}
