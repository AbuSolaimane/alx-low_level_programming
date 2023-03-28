#include <stdio.h>
/**
 * print_array - function
 *
 * @a: parameter
 *
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
}
