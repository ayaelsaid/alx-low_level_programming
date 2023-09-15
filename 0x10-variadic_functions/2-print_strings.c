#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - ...
 * @separator: ...
 * @n: ...
 * description: ...
 * Return: ...
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	i = 0;
	while (i < n)
	{
	const char *str = va_arg(p, const char *);

	if (str)
	{
	printf("%s", str);
	if (separator && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	else
	{
	printf("(nil)");
	if (separator && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	i++;
	}
	va_end(p);
	putchar('\n');
}
