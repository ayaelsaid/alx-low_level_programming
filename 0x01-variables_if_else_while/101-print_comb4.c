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
				putchar(48 + x);
				putchar(48 + y);
				putchar(48 + z);

				if (x <= 6 || y <= 7 || z <= 8)
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
