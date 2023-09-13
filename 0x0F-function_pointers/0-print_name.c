#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string
 * @f: pointer to function
 * description: declare the value
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != 0)
	f(name);
}
