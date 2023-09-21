#include "lists.h"

/**
 * list_len - ...
 *
 * @h: pointer to head
 *
 * description: ...
 *
 * Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		len++;
		h = h->next;
	}
	return (len);
}
