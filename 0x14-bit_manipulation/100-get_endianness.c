#include "main.h"
/**
 * get_endianness - ...
 * Return: ...
*/
int get_endianness(void)
{
	int num = 1;
	int *n;

	n = &num;
	if (*n == 1)
		return (1);
	else
		return (0);
}
