#include "lists.h"

/**
 * sum_nodes_dlistint - function
 *
 * @head: param
 *
 * Return: return
 */
int sum_nodes_dlistint(dlistint_t *head)
{
	int sum_nodes = 0;

	while (head)
	{
		sum_nodes += head->n;
		head = head->next;
	}

	return (sum_nodes);
}
