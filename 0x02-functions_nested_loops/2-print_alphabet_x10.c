#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -  intialize on _putchar function
 *
 * Description: print alphabet 10 times
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i < 10; i++)
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	putchar('\n');
}
