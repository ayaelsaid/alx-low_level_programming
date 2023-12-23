#include "hash_tables.h"
/**
 * hash_table_set - ...
 * @ht: ...
 * @key: ...
 * @value: ...
 * Return: ...
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_table;
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
	current = current->next;
	}
	new_table = malloc(sizeof(hash_node_t *));
	if (new_table == NULL)
		return (0);
	new_table->key = strdup(key);
	new_table->value = strdup(value);
	if (new_table->key == NULL || new_table->value == NULL)
	{
		free(new_table->key);
		free(new_table->value);
		free(new_table);
		return (0);
	}
	if (ht->array[index] == NULL)
		ht->array[index] = new_table;
	else
	{
		new_table->next = ht->array[index];
		ht->array[index] = new_table;
	}
	return (1);
}
