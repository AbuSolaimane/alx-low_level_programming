#include "search_algos.h"

/**
 * jump_list - func
 *
 * @list: param 1
 *
 * @size: param 2
 *
 * @value: param 3
 *
 * Return: return
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, numSteps;
	listint_t *myNode, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	numSteps = sqrt(size);
	for (myNode = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		myNode = jump;
		for (step += numSteps; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			myNode->index, jump->index);

	for (; myNode->index < jump->index && myNode->n < value; myNode = myNode->next)
		printf("Value checked at index [%ld] = [%d]\n", myNode->index, myNode->n);
	printf("Value checked at index [%ld] = [%d]\n", myNode->index, myNode->n);

	return (myNode->n == value ? myNode : NULL);
}
