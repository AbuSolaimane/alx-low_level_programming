#include "lists.h"

/**
 * free_dlistint - function
 *
 * @head: param
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temparary;

	while (head)
	{
		temparary = head->next;
		free(head);
		head = temparary;
	}
}
