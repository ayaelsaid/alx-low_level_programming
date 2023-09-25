#include "lists.h"

/**
 * delete_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 * description: ...
 * Return: ...
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *after;
	size_t size = 0;

	if (*head == NULL)
	{
	return (-1);
	}
	if (index == 0)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	while (temp != NULL && size < index)
	{
		after = temp;
		temp = temp->next;
		size++;
	}
	if (temp == NULL)
	{
	return (-1);
	}
	after->next = temp->next;
	free(temp);
	return (1);
}
