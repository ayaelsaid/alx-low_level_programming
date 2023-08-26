#include "main.h"

/**
 * _abs - Print the absolute value of an integer
 *
 * @n: take an integer for function
 *
 * Return: n
*/

int _abs(int n)
{
	if (n >= 0)
	return (n);
	if (n < 0)
	n = (-1) * n;
	return (n);
}
