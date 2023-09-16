#include <stdio.h>
#include "main.h"

/**
 * char *_strncpy - a function that copies a string
 *
 * @dest: pointer points to first character
 *
 * @src: pointer points to second character
 *
 * @n: take an integer
 *
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; i < n && src[i] != '\0';)
	{
	dest[j] = src[i];
	i++;
	}
	while (j > n && dest[j] != '\0')
	{
	dest[j] = '\0';
	j++;
	}
	return (dest);
}
