#include "lists.h"

/**
 * free_listint2 - ...
 * @head: ...
 * description: ...
 * Return: ...
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *after;

	temp = *head;
	while (temp != NULL)
	{
		after = temp->next;
		free(temp);
		temp = after;
	}
	*head = NULL;
	free(temp);
}
