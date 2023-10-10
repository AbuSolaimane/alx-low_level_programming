#include "search_algos.h"

/**
 * min - func
 *
 * @a: param 1
 *
 * @b: param 2
 *
 * Return: int
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - func
 *
 * @array: param 1
 * 
 * @size: param 2
 *
 * @value: param 3
 *
 * Return: index or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left, right, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (right = 0; right < size && array[right] < value;
	     left = right, right += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       right, array[right]);
	}	
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (; left <= min(right, size - 1); left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}

	return (-1);
}
