#include "main.h"

/**
 * binary_to_uint - ...
 * @b: ...
 * Return: ...
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int num;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		if (*b == '1')
		{
			num = 1;
		}
		if (*b == '0')
		{
			num = 0;
		}
		res = (res << 1) | num;
	b++;
	}
	return (res);
}
