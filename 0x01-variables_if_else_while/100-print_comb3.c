#include <stdio.h>


/**
 * main - entry point
 *
 * Description: declare the value
 *
 * Return: 0(success)
*/

int main(void)
{
	int y, j;

	for (y = 0; y <= 9; y++)
	{
		for (j = y + 1; j <= 9; j++)
		{
			putchar(48 + y);
			putchar(48 + j);

			if (y < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
