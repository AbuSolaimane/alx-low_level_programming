#include "hash_tables.h"

/**
 * key_index - func
 *
 * @key: param
 *
 * @size: param
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
