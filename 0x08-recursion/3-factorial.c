#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: take an integer
 *
 * Return: -1 or 1 or n * factorial(n - 1)
*/

int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (factorial(n - 1) == 0)
	return (1);
	return (n * factorial(n - 1));
}

