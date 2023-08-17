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

	for (x = 1; x <= 10; x++)
	{
		for (n = 0; n <= 14; n++)
		{
		if (n > 9)
		putchar((n / 10) + 48);
		putchar((n % 10) + 48);
		}
	putchar('\n');
	}
}
