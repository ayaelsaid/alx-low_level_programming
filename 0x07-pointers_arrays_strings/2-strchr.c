#include <stdio.h>
#include "main.h"

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
