#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - difference of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - product of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - result of the division of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	result = a / b;
	return (result);
}

/**
 * op_mod - remainder of the division of a and b
 * @a: first number
 * @b: second number
 * description: declare the value
 * Return: result
*/

int op_mod(int a, int b)
{
	int result;

	if (b  == 0)
	{
	printf("Error\n");
	exit(100);
	}
	result = a % b;
	return (result);
}
