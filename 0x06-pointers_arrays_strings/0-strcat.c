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
	int n;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	dest++;
	n = j;
	while (src[i] != '\0')
	src++;
	dest[n + i] =src[i];
	dest[n + i] = '\0';
	return (dest);
}
