#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * **string_nconcat - function that concatenates two strings.
 *
 * @s1: pointer points to first character
 *
 * @s2: pointer points to second character
 *
 * @n: number of bytes of s2
 *
 * Return: ptr or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	unsigned int len1, len2;
	char *ptr;

	len2 = 0;
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
	{
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	}
	if (n >= len2)
		n = len2;
	ptr = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < len1; k++)
	ptr[k] = s1[k];
	for (j = 0; j < n; j++)
	ptr[k + j] = s2[j];
	ptr[k + j] = '\0';
	return (ptr);
}
