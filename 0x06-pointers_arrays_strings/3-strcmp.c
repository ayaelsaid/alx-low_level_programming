#include <stdio.h>
#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: pointer points to first character
 *
 * @s2: pointer points to second character
 *
 * Return: 0 or -1 or 1
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int p;

	i = 0;
	p = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++
		if (s1[i] != s2[i]
		{
		p = i;
		break;
		if (p == 0)
		return (0);	
		else if (s1[i] > s2[i])
		return (1);
		else
		return (-1);
		}
	}
}
