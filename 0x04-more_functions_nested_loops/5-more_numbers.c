#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that print numbers
 *
 * Return: void
*/
void more_numbers(void)
{
	int n, x;

	for (n = 0; n <= 10; n++)
		for (x = 0; x <= 14; x++)
			putchar(x + 48);
	putchar('\n');
}
