#include "main.h"

/**
 * *_strpbrk - ...
 * @s: ...
 * @accept: ...
 * Return: ...
*/

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
	temp = accept;
	while (*temp != '\0')
	{
	if (*s == *temp)
	{
	return (s);
	}
	temp++;
	}
	s++;
	}
	return (NULL);
}
/**
 * _strspn - ...
 * @s: ...
 * @accept: ...
 * Return: ...
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char *temp;
	int p;

	while (*s != '\0')
	{
	p = 0;
	temp = accept;
	while (*temp != '\0')
	{
	if (*s == *temp)
	{
	p = 1;
	break;
	}
	temp++;
	}
	if (!p)
	{
	break;
	}
	i++;
	s++;
	}
	return (i);
}
/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: pointer points to string
 *
 * @c: character
 *
 * Return: s or Null
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s && s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
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
/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: poeinter to memory area
 *
 * @b: take a character
 *
 * @n: a number of bytes
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
