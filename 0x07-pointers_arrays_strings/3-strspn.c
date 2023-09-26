#include <stdio.h>
#include "main.h"

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
