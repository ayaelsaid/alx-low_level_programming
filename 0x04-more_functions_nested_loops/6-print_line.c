#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: number of times the character
 *
 * Return: void
*/
void print_line(int n)
{
	while (n-- > 0)
	{
	putchar(95);
	}
	putchar('\n');
}
