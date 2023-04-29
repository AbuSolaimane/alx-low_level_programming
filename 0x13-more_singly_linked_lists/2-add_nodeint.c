#include "lists.h"

/**
 * add_nodeint - function
 *
 * @head: parameter
 *
 * @n: parameter2
 *
 * Return: return
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

