#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * Return: ...
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int bitscount = 0;

	result = n ^ m;
	while (result)
	{
		bitscount += result & 1;
		result >>= 1;
	}
	return (bitscount);
}
