#include "hash_tables.h"

/**
 * hash_djb2 - func
 *
 * @str: param
 *
 * Return: return
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashcode;
	int ch;

	hashcode = 5381;
	while ((ch = *str++))
		hashcode = ((hashcode << 5) + hashcode) + ch;
	return (hashcode);
}
