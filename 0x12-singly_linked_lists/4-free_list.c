#include "lists.h"

/**
 * free_list - ...
 * @head: ...
 * description: ...
 * Return: ...
*/
void free_list(list_t *head)
{
	list_t *temp;
	list_t *after;

	temp = head;
	while (temp != NULL)
	{
		after = temp->next;
		free(temp->str);
		free(temp);
		temp = after;
	}
}
