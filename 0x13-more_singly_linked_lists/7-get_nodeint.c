#include "lists.h"

/**
 * get_nodeint_at_index - ...
 * @index: ...
 * @head: ...
 * description: ...
 * Return: the number of nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t size= 0;

	if (head == NULL)
	return(0);
	while (head != NULL && size < index)
	{
	head = head->next;
	size++;
	}
	return (head);
}
