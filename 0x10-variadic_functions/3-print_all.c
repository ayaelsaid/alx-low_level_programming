#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - ...
 * @format: ...
 * description: ...
 * Return: ...
*/

void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i = 0;
	unsigned int n = 0;
	char *sep = ",";

	va_start(p, format);
	while (format[n] != '\0')
		n++;
	while (format && format[i] != '\0')
	{
		if (i >= n - 1)
		{
		sep = "";
		}
	switch (format[i])
	{
		case 's':
		{
			const char *str = va_arg(p, const char *);

			if (str)
			printf("%s%s", str, sep);
			else
			printf("(nil)");
			break;
		}
		case 'i':
			printf("%d%s", va_arg(p, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(p, double), sep);
			break;
		case 'c':
			printf("%c%s", va_arg(p, int), sep);
			break;
	}
	i++;
	}
	printf("\n");
	va_end(p);
}
