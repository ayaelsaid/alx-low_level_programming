#include <stdio.h>


/**
 * main - entry point
 *
 * Description: increment value
 *
 * Return: 0(success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar('0' + (n % 10));
	putchar('\n');
	return (0);
}
