#include <stdio.h>
#include "main.h"

/**
 * print_square - function that draws a straight line in the terminal
 *
 * @size: take an integer
 *
 * Return: void
*/
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
	for(y = 0; y < (size - 1); y++)
	{
	if (size > 0)
	{
	putchar('#');
	putchar('\n';
	}
	}
	else
	{
	putchar('\n');
	}
	}
}
