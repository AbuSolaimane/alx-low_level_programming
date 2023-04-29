#include "lists.h"

/**
 * free_listint2 - function
 *
 * @head: parameter
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while ((*head)->next)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
