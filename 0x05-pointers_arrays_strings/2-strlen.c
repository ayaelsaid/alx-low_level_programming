#include <stdio.h>
#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: string
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}
