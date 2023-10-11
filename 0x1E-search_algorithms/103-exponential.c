#include "search_algos.h"

/**
 * min - func
 *
 * @a: param 1
 *
 * @b: param 2
 *
 * Return: param 3
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - func
 *
 * @array: param 1
 *
 * @value: param 2
 *
 * @low: param 3
 *
 * @high: param 4
 *
 * Return: an int
 */

int binary_search_helper(int *array, int value,
			 size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - func
 *
 * @array: param 1
 *
 * @size: param 2
 *
 * @value: param 3
 *
 * Return: an int
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, expo = 1;

	if (!array || size == 0)
		return (-1);

	while (expo < size && array[expo] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       expo, array[expo]);
		expo *= 2;
	}

	low = expo / 2;
	high = min(expo, size - 1);
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}
