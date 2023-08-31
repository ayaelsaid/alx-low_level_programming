#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: take a string
 *
 * Return: i or 0
*/
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
	i = 1 + _strlen_recursion(s + 1);
	return (i);
	}
	else
	{
	return (0);
	}
}
