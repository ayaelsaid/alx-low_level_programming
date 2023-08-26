#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - intialize on _putchar function
 *
 * decription: print the alphabet in lowercase,
 *		followed by a new line.
 *
 * Return: void
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
