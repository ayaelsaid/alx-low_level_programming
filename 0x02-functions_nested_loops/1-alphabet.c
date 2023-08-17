#include <stdio.h>
#include "main.h"

/**
 * print_alphabe - initialize on _putchar function
 *
 * Description: Print the alphabet in lowercase
 *
 * REturn: void
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
