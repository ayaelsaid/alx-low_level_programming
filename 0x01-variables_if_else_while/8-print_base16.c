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
	int n;
	char ch;

	for (n = 0; n < 10; n++)
		putchar('0' + (n % 10));
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
