#include "hash_tables.h"

/**
 * hash_table_get - func
 *
 * @ht: param
 *
 * @key: param
 *
 * Return: return
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *my_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	my_node = ht->array[idx];
	while (my_node && strcmp(my_node->key, key) != 0)
		my_node = my_node->next;
	return ((my_node == NULL) ? NULL : my_node->value);
}
