#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 *
 * @n: take integer for function
 *
 * Return: last_digit
*/

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit >= 0)
	{
	_putchar(last_digit + 48);
	return (last_digit);
	}
	else
	last_digit = last_digit * -1;
	_putchar(last_digit + 48);
	return (last_digit);
}
