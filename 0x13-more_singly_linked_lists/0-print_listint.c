#include "lists.h"

/**
 * print_listint - ...
 *
 * @h: pointer to head
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		j++;
	h = h->next;
	}
	return (j);
}
