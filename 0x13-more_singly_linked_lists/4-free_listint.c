#include "lists.h"

/**
 * free_listint - function
 *
 * @head: parameter
 */
void free_listint(listint_t *head)
{
	if (!head)
		exit(0);
	if(head->next)
		free_listint(head->next);
	free(head);
}
