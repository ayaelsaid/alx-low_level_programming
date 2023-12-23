#include "hash_tables.h"
/**
 * hash_table_delete - ...
 * @ht: ...
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *mynode;

	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			mynode = current;
			current = current->next;
			free(mynode->key);
			free(mynode->value);
			free(mynode);
		}
	i++;
	}
	free(ht->array);
	free(ht);
}
