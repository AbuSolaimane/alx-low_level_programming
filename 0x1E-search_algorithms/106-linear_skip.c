#include "search_algos.h"


/**
 * linear_skip - func
 *
 * @list: param 1
 *
 * @value: param 2
 *
 * Return: return
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temporary = NULL, *until = NULL;

	if (!list)
		return (NULL);

	temporary = list;
	while (temporary && temporary->express && temporary->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temporary->express->index, temporary->express->n);
		temporary = temporary->express;
	}
	until = temporary;
	while (until && until->next != until->express)
		until = until->next;
	/* value potentially lies between two express nodes */
	if (temporary->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temporary->express->index, temporary->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temporary->index, temporary->express->index);
	}
	/* value is greater than last express node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temporary->index, until->index);

	while (temporary != until && temporary->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temporary->index, temporary->n);
		temporary = temporary->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       temporary->index, temporary->n);

	if (temporary == until)
		return (NULL);
	return (temporary);
}
