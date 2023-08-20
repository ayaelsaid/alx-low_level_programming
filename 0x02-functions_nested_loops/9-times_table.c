#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
*/
void times_table(void)
{
	int row, cloumn, sum;

	for (cloumn = 0; cloumn <= 9; cloumn++)
	{
	for (row = 0; row <= 9; row++)
	{
	sum = row * cloumn;
	if (sum > 9)
	{
	putchar(44);
	putchar(32);
	putchar((sum / 10) + 48);
	putchar((sum % 10) + 48);
	}
	else if (row != 0)
	{
	putchar(44);
	putchar(32);
	putchar(32);
	putchar(sum + 48);
	}
	else
	putchar(sum + 48);
	}
	putchar('\n');
	}
}
