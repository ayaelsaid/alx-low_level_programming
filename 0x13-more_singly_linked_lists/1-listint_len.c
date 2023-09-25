#include "lists.h"

/**
 * listint_len - ...
 *
 * @h: pointer to head
 *
 * description: ...
 *
 * Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
