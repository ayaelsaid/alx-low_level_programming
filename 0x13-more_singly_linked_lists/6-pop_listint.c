#include "lists.h"

/**
 * pop_listint - ...
 * @head: ...
 * description: ...
 * Return: ...
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
	}
}
