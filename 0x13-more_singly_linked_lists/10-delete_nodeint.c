#include "lists.h"

/**
 * delete_nodeint_at_index - function
 *
 * @head: parameter
 *
 * @index: parameter
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *toDelete;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (-1);
	toDelete = temp->next;
	free(toDelete);
	temp->next = temp->next->next;
	return (1);

}
