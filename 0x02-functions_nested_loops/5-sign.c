#include <stdio.h>
#include "main.h"

/**
 * print_sign - Print + if n is greater than zero - 0 if n is zero.
 *		- if n is less than zero
 *
 * @n: take integer for function
 *
 * Return: 0 0r 1 0r -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
