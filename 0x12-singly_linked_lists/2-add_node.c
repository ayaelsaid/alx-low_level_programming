#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_node - ...
 * @str: string
 * @h: pointer to head
 * description: prints each elemnts
 * Return: the number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	
	struct list_s newnode = (struct list_s*)malloc(sizeof(struct list_s));
	if (newnode == NULL)
	return (NULL);
	newnode-> str = str;
	newnode->next = head;
	return (newnode);
}
