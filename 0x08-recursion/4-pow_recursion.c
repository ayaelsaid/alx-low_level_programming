#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the value of
 *			x raised to the power of y
 *
 * @x: take a number
 *
 * @y: take integer
 *
 * Return: result or -1 or 1
*/
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
	return (-1);
	}
	else if ((y - 1) == -1)
	{
	return (1);
	}
	else
	{
	result = x * _pow_recursion(x, y - 1);
	return (result);
	}
}
