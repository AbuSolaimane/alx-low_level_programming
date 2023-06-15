#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 *
 * @head: param
 *
 * @index: para
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary = *head;

	if (!(*head))
		return (-1);
	for (; index != 0; index--)
	{
		if (!temporary)
			return (-1);
		temporary = temporary->next;
	}
	if (temporary == *head)
	{
		*head = temporary->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temporary->prev->next = temporary->next;
		if (temporary->next != NULL)
			temporary->next->prev = temporary->prev;
	}
	free(temporary);
	return (1);
}
