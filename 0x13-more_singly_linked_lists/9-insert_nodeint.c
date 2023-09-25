#include "lists.h"

/**
 * *insert_nodeint_at_index - ...
 * @head: ...
 * @idx: ...
 * @n: ...
 * description: ...
 * Return: ...
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t size = 0;
	listint_t *new_node;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}
	temp = *head;
	while (temp != NULL && size < idx - 1)
	{
	temp = temp->next;
	size++;
	}
	if (temp == NULL)
	{
	free(temp);
	return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
