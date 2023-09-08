#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - a function that allocates memory for an array
 *
 * @nmemb: number of elemnts
 *
 * @size: size of array
 *
 * Return: arr or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
	arr[i] = 0;
	i++;
	}
	return (arr);
}
