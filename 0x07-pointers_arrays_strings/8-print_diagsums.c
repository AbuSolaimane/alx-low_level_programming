#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: square matrix of which we print the sum of diagonals
 *
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 1;
	int sum = 0;

	while (i < size * size)
	{
		sum += a[i];
		i = j * size + j;
		j++;
	}
}
