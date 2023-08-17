#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks input is a digit or not
 *
 * @c: take the integer
 *
 * Return: 1 if it is a digit or 0 if not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
