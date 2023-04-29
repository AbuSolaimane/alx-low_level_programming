#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: parameter
 *
 * @n: parameter2
 *
 * Return: return
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t* newNode, *iterator = *head;
	
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return newNode;
	}
	while (iterator->next)
		iterator = iterator->next;
	iterator->next = newNode;
	return (*newNode);
}
