#include <stdio.h>
#include "main.h"

/**
 * add - adds two integers and returns the result
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result
*/

int add(int a, int b)
{
	int result;

	result = a + b;
	if (result >= 0 && result <= 9)
	{
	putchar(result + 48);
	}
	else
	{
	putcher((result / 10) + 48);
	putchar((result % 10) + 48);
	}
	}
	return (result);
}
