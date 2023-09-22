#include "lists.h"

/**
 * *add_node_end - ...
 * @str: string
 * @head: pointer to head
 * description: prints each elemnts
 * Return: ...
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *h;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		printf("[0] (nil)\n");
		return (NULL);
	}
	new_node->next = NULL;
	new_node->len = strlen(str);
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
