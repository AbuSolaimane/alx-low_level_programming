#include "search_algos.h"

/**
 * interpolation_search - func
 *
 * @array: param 1
 *
 * @size: param 2
 *
 * @value: param 3
 *
 * Return: an int
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pivot;

	if (array == NULL)
		return (-1);

	while (array[high] != array[low] &&
	       value >= array[low] && value <= array[high])
	{
		pivot = low + (((double)(high - low) / (array[high] - array[low]))
			    * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pivot, array[pivot]);
		if (array[pivot] < value)
			low = pivot + 1;
		else if (value < array[pivot])
			high = pivot - 1;
		else
			return (pivot);
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	pivot = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pivot);
	return (-1);
}
