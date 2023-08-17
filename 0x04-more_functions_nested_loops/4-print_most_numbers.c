#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function that print numbers
 *
 * Return: void
*/
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		if (n != 2 && n != 4)
			putchar(n + 48);
	putchar('\n');
}
