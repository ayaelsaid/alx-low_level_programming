#include "lists.h"

/**
 * free_listint2 - ...
 * @head: ...
 * description: ...
 * Return: ...
*/
void free_listint2(listint_t **head)
{
	listint_t *after;

	if (head)
	{
	while (*head != NULL)
	{
		after = *head;
		*head = (*head)->next;
		free(after);
	}
	}
	head = NULL;
}
