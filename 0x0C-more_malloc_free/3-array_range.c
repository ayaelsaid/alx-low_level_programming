#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 *
 * @min: an integer
 *
 * @max: an integer
 *
 * Return: NULL or new_arr
*/
int *array_range(int min, int max)
{
	int *new_arr;
	int size, n, k;

	k = 0;
	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	new_arr = (int *)malloc(size * sizeof(int));
	if (new_arr == NULL)
	{
		return (NULL);
	}
	for (n = min; n <= max; n++)
	{
		new_arr[k++] = n;
	}
	return (new_arr);
}
