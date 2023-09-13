#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: take a number
 * @argv: take string
 * description: declare the value
 * Return: 0(success)
*/

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *o = argv[2];
	int result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(o);
	if (!f)
	{
		printf("Error\n");
		return (99);
	}
	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
