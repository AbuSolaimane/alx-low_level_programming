#include "hash_tables.h"

/**
 * hash_table_print - func
 *
 * @ht: param
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *my_node;
	unsigned long int idx;
	unsigned char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (flag == 1)
				printf(", ");

			my_node = ht->array[idx];
			while (my_node != NULL)
			{
				printf("'%s': '%s'", my_node->key, my_node->value);
				my_node = my_node->next;
				if (my_node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
