#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check is lowercase or uppercase
 *
 * Description: check the code
 *
 * Return: 0 or 1
*/
int _isalpha(int c)
{
	int c;

	if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
		return (1);
	return (0);
}
	
