#include "lists.h"

/**
 * *add_nodeint_end - ...
 * @str: string
 * @head: pointer to head
 * description: prints each elemnts
 * Return: ...
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *h;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->n = n;

	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
	h = *head;
	while (h->next != NULL)
	{
	h = h->next;
	}
	h->next = new_node;
	}
	return (new_node);
}
