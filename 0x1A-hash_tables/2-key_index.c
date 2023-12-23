#include "hash_tables.h"
/**
 * key_index - ...
 * @key: ...
 * @size: ...
 * Return: ...
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size == 0)
		return (0);
	hash = hash_djb2(key);
	return (hash % size);
}
