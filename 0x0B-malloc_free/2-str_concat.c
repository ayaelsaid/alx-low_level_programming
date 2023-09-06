#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 *
 * @s1: pointer points to first character
 *
 * @s2: pointer points to second character
 *
 * Return: ptr or NULL
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, n, k;
	unsigned int len1, len2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
		len1 = 0;
	}
	else
		for (i = 0; s1[i] != '\0'; i++)
			len1 = i + 1;
	if (s2 == NULL)
	{
		s2 = "";
		len2 = 0;
	}
	else
	for (j = 0; s2[j] != '\0'; j++)
		len2 = j + 1;
	if (len1 == 0)
	{
	ptr = (char *)malloc(sizeof(char) * (len2 + 1));
	for (n = 0; n < len2; n++)
	ptr[n] = s2[n];
	}
	else if (len2 == 2)
	{
	ptr = (char *)malloc(sizeof(char) * (len1 + 1));
	for (n = 0; n < len1; n++)
	ptr[n] = s1[n];
	}
	else
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (n = 0; n < len1; n++)
	ptr[n] = s1[n];
	for (k = 0; k < len2; k++)
	ptr[n + k] = s2[k];
	ptr[n + k] = '\0';
	return (ptr);
}
