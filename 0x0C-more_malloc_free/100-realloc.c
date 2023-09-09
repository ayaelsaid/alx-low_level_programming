#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block
 *
 * @ptr: pointer
 *
 * @old_size: byte of the allocated space for ptr
 *
 * @new_size: the new size
 *
 * Return: NULL or ptr or new_ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
{
	void *new_ptr;
	unsigned int i;

	if (new_size != old_size)
	{
	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
		}
	free(ptr);
	return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
	new_ptr[i] = ptr[i];
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = old_size; i < new_size; i++)
			new_size[i] = 0;
	}
	}
	return (new_ptr);
	else
		return (ptr);
}
