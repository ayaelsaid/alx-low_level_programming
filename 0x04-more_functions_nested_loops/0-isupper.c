#include <stdio.h>
#include "main.h"

/**
 * _isupper - function that checks if character is uppercase or  not
 *
 * @c: check the character
 *
 * Return: return 1 if 'c' is uppercase, return 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
