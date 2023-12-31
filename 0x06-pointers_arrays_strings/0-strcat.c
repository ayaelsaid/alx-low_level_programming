#include <stdio.h>
#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: pointer points to first character
 *
 * @src: pointer points to second character
 *
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	j++;
	while (src[i] != '\0')
	{
	dest[j + i] = src[i];
	i++;
	dest[j + i] = '\0';
	}
	return (dest);
}
