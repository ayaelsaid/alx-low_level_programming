#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that print numbers
 *
 * Return: void
*/
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + 48);
	putchar('\n');
}
