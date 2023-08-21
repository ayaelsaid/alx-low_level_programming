#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: take character
 *
 * Return: void
*/
void print_rev(char *s)
{
	int i;
	string result =" "

	i = 0
	while (i >= 0)
	i--;
	{
	printf("str[%d]: %c\n", i, *(s + i));
	}
	i +=  1;
	printf("str{%d}: \0\n", i);
	result += *(s + i);
	printf("%s\n", result);
	}
}

