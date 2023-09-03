#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: take a string
 *
 * Return: 0 or (res * num)
*/
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *t;
	int p;

	num = 0;
	p = 1;
	sign = 1;
	t = s;
	while (*t != '\0')
	{
		if (*t == '-')
			sign *= -1;
		else if (*t >= '0' || *t <= '9')
			num = (num * 10) + (*t - '0');
		else if (*t < 48 && *t > 57)
		{
			p = 0;
			break;
		}
		t++;
	}
	if (p == 0)
		return (0);
	return (num * sign);
}
