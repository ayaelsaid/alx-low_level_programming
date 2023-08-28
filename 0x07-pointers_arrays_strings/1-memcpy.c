#include <stdio.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: pointer to memory area
 *
 * @src: string to be copied
 *
 * @n: a number of bytes
 *
 * Return: return to pointer @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
