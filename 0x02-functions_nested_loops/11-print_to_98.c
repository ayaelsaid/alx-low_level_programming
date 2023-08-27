#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 * @n: take an integer
 *
 * Return: void
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
	while (n <= 98)
	{
	printf("%d", n);
	if (n <= 97)
	{
	putchar(44);
	putchar(32);
	}
	n++;
	}
	}
	else if (n >= 98)
	{
	while (n >= 98)
	{
	printf("%d", n);
	if (n >= 99)
	{
	printf(",");
	printf(" ");
	}
	n--;
	}
	}
	printf("\n");
}
