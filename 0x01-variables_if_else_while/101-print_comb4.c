#include <stdio.h>


/**
 * main - entry point
 *
 * Dscription: declare the value
 *
 * Return: 0(success)
*/

int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(48 + 0);
				putchar(48 + 0);
				putchar(48 + 0);

				if (y + x + z == 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
