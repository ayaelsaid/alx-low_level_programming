#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: take an integer
 *
 * Return: void
*/
void print_times_table(int n)
{
	int row, cloumn, sum;

	if (n >= 0 && n <= 14)
	{
		for (cloumn = 0; cloumn <= n; cloumn++)
		{
		for (row = 0; row <= n; row++)
		{
		sum = row * cloumn;
		if (sum > 9)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar((sum / 10) + 48);
		_putchar((sum % 10) + 48);
		}
		else if (sum > 99)
		{
		_putchar(44);
		_putchar(32);
		_putchar((sum / 10) + 48);
		_putchar((sum % 10) + 48);
		_putchar(sum + 48);
		}
		else if (row != 0)
		{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(32);
		_putchar(sum + 48);
		}
		else
		_putchar(sum + 48);
		}
		_putchar('\n');
		}
	}
}
