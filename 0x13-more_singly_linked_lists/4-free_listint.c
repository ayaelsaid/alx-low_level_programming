#include "lists.h"

/**
 * free_listint - ...
 * @head: ...
 * description: ...
 * Return: ...
*/
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *after;

	temp = head;
	while (temp != NULL)
	{
		after = temp->next;
		free(temp);
		temp = after;
	}
}
