#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low, middle, high, index;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		middle = (low + high) / 2;

		printf("Searching in array: ");
		for (index = low; index <= high; index++)
			printf("%i%s", array[index], index == high ? "\n" : ", ");

		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
