#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check is lowercase or uppercase
 *
 * @c: take character form function
 *
 * Return: 0 or 1
*/
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c >= 90))
		return (1);
	return (0);
}
