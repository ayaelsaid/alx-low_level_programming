#include "main.h"

/**
 * _add - sum of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int _add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * _sub - difference of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int _sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * _mul - product of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int _mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * _div - result of the division of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int _div(int a, int b)
{
	int result;

	if (b == 0)
	{
	printf("Error\n");
	return (0);
	}
	result = a / b;
	return (result);
}

/**
 * _mod - remainder of the division of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int _mod(int a, int b)
{
	int result;

	if (b  == 0)
	{
	printf("Error\n");
	return (0);
	}
	result = a % b;
	return (result);
}
