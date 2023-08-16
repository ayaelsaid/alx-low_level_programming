#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: print _putchar
 *
 * Return: 0(success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(str[i]);
	putchar('\n');
	return (0);
}
