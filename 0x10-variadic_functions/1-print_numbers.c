#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - ...
 * @separator: ...
 * @n: ...
 * description: ...
 * Return: ...
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	i = 0;
	while (i < n)
	{
	printf("%d", va_arg(p, int));
		if (separator && i < n - 1)
		{
		printf("%s", separator);
		}
	i++;
	}
	va_end(p);
	putchar('\n');
}
