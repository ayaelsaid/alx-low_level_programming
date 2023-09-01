#include <stdio.h>
#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: pointer points to string
 *
 * @c: pointer points to character
 *
 * Return: s or Null
*/
char *_strchr(char *s, char c)
{
	int i;

	s = &c;
	for (i = 0 && s[i] != '\0'; i++;)
	{
		if (s[i] != c)
		return (NULL);
		else
		{
		return (*s);
