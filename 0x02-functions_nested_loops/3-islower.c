#include <stdio.h>
#include "main.h"

/**
 * _islower - check the lowercase
 *
 * @c: take charcater for function
 *
 * Return: 1 or on success 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
