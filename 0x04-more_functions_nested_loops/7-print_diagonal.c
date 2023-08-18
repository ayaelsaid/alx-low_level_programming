#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: number of times the character
 *
 * Return: void
*/
void print_diagonal(int n)
{
	int x, y;

	for ( x = 0; x < n; x++)
	{
		for ( y = 0; y < n; y++)
	{
		if (x == y && n-- > 0)
	{
		putchar(' ');
		putchar(92);
	}
	}
	}
	putchar('\n');
}
