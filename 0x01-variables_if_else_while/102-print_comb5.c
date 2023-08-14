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
	int x, y;

	for (x = 0; x < 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar('0' + (x / 10));
			putchar('0' + (x % 10));
			putchar(' ');
			putchar('0' + (y / 10));
			putchar('0' + (y % 10));

			if (x <= 97 || y <= 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
