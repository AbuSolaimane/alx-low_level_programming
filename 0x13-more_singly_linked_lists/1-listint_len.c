#include "lists.h"

/**
 * listint_len - function
 *
 * @h: parameter
 *
 * Return: return
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);
	return (1 + listint_len(h->next));
}
