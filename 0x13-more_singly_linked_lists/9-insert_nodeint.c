#include "lists.h"

/**
 * insert_nodeint_at_index - function
 *
 * @head: parameter
 *
 * @idx: parameter2
 *
 * @n: parameter3
 *
 * Return: node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *temporary = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; temporary && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = temporary->next;
			temporary->next = newNode;
			return (newNode);
		}
		else
			temporary = temporary->next;
	}

	return (NULL);
}
