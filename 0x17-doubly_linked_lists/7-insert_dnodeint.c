#include "lists.h"

/**
 * insert_dnodeint_at_index - function.
 *
 * @h: param
 *
 * @idx: param
 *
 * @n: param
 *
 * Return: return
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temporary = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temporary = temporary->next;
		if (temporary == NULL)
			return (NULL);
	}

	if (temporary->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temporary;
	new_node->next = temporary->next;
	temporary->next->prev = new_node;
	temporary->next = new_node;

	return (new_node);
}
