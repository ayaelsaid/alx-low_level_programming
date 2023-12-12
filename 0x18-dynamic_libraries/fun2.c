#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: pointer points to first character
 *
 * @s2: pointer points to second character
 *
 * Return: 0 or 1 or -1-
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
	i++;
	}
	return (s1[i] - s2[i]);
}
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
/**
 * *_strstr - ...
 * @haystack: ...
 * @needle: ...
 * Return: ...
*/
char *_strstr(char *haystack, char *needle)
{

	char *temp = haystack;
	char *ptr = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		while (*ptr != '\0' && *temp == *ptr)
		{
			temp++;
			ptr++;
		}
		if (*ptr == '\0')
		{
			return (haystack);
		}
	haystack++;
	}
	return (NULL);
}
