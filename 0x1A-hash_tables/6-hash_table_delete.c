#include "hash_tables.h"

/**
 * hash_table_delete - func
 *
 * @ht: param
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *my_head = ht;
	hash_node_t *my_node, *temporary;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			my_node = ht->array[i];
			while (my_node != NULL)
			{
				temporary = my_node->next;
				free(my_node->key);
				free(my_node->value);
				free(my_node);
				my_node = temporary;
			}
		}
	}
	free(my_head->array);
	free(my_head);
}
