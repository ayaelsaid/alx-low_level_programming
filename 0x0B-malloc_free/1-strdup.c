#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * *_strdup - a function that returns a pointer to
 *		a newly allocated space in memory
 *
 * @str: string
 *
 * Return: NULL or ptr
*/
char *_strdup(char *str)
{
	unsigned int size;
	char *ptr;
	unsigned int i, j;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	i++;
	size = i + 1;
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == 0)
		return (NULL);
	for (j = 0; j < size; j++)
	ptr[j] = str[j];
	ptr[size] = '\0';
	return (ptr);
}
