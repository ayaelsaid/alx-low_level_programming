#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to the power of y
 *
 * @x: take a number
 *
 * @y: take integer
 *
 * Return: _pow_recursion(y ^ x) or -1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y > 0)
	return (_pow_recursion(y ^ x);
