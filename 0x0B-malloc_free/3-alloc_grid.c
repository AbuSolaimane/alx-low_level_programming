#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (i <= 0 || j <= 0)
		return (NULL);

	matrix = malloc(width * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(height * sizeof(int));
		if (matrix[i] == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
