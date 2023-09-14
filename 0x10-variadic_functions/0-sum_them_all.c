#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - ...
 * @n: ...
 * description: ...
 * Return: ...
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
