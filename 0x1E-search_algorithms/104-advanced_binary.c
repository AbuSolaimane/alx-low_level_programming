#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t left, size_t right);

/**
 * binary_search_recursion - func
 *
 * @array: param 1
 *
 * @value: param 2
 *
 * @left: param 3
 *
 * @right: param 4
 *
 * Return: param 5
 */
int binary_search_recursion(int *array, int value,
			    size_t left, size_t right)
{
	size_t mid, index;

	if (!array)
		return (-1);

	mid = (left + right) / 2;
	printf("Searching in array: ");
	for (index = left; index <= right; index++)
		printf("%i%s", array[index], index == right ? "\n" : ", ");

	if (array[left] == value)
		return ((int)left);

	if (array[left] != array[right])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, right));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							left, mid));
	}

	return (-1);
}

/**
 * advanced_binary - func
 *
 * @array: param 1
 *
 * @size: param 2
 *
 * @value: param 3
 *
 * Return: param 4
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, left, right));
}
