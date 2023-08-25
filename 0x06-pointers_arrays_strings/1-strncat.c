#include <stdio.h>
#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 *
 * @dest: pointer points to first character
 *
 * @src: pointer points to second character
 *
 * @n: take an integer
 *
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	j++;
	while (i < n && src[i] != '\0')
	{
	dest[j + i] = src[i];
	i++;
	dest[j + i] = '\0';
	}
	return (dest);
}
