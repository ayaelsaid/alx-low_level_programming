#include <stdio.h>
#include "main.h"

/**
 * char *_strcpy - a function that copies a string
 *
 * @dest: pointer points to first character
 *
 * @src: pointer points to second character
 *
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	dest[i] = '\0';
	}
	return (dest);
}
