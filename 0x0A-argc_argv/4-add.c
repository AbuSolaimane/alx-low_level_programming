#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 *
 * @argc: arguments count
 *
 * @argv: arguments vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, j;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (isdigit(*(argv[i] + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
