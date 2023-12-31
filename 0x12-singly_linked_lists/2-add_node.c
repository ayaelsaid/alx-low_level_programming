#include "lists.h"

/**
 * *add_node - ...
 * @str: string
 * @head: pointer to head
 * description: prints each elemnts
 * Return: the number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	}
	else
	{
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	}
	return (new_node);
}
