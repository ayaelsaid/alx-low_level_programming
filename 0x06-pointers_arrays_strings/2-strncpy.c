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

	for (i = 0; i < n && src[i] != '\0';)
	{
	dest[i] = src[i];
	i++;
	dest[i] = '\0';
	return (dest);
}
