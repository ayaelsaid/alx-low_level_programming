#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 *		the natural square root of a number
 *
 * @n: take a number
 *
 * Return: -1 0r result
*/
int _sqrt_recursion(int n)
{
	int result;

	if (((n - 1) % n) != 0)
	{
	return (-1);
	}
	else
	{
	result = _sqrt_recursion((n - 1) / n);
	if (result == ((n - 1) / n))
	{
	return (result);
	}
	}
