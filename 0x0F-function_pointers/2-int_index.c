#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function
 * description: declare the value
 * Return: index or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	return (-1);
	if (array && cmp)
	{
	for (index = 0; index < size; index++)
	{
	if (cmp(array[index]))
	return (index);
	}
	}
	return (-1);
}
