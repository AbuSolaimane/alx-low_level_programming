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
	int i;
	int j = 0;
	int sum = 0;

	for (i = 0; i < size * size; i = j * size + j)
	{
		sum += a[i];
		j++;
	}
}
