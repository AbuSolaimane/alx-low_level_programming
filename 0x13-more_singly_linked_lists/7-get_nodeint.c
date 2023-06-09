#include "lists.h"

/**
 * get_nodeint_at_index - function
 *
 * @head: parameter
 *
 * @index: parameter2
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indexOfHead = 0;
	listint_t *temp = head;

	while (temp && indexOfHead < index)
	{
		temp = temp->next;
		indexOfHead++;
	}

	return (temp);
}
