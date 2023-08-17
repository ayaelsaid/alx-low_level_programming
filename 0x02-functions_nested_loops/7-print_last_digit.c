#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 *
 * @n: take integer for function
 *
 * Return: 0(success)
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		_putchar(lastdigit = (n % 10) * -1);
	else
		_putchar(lastdigit = (n % 10) + 48);
	return (lastdigit);
}

