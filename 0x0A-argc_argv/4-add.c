#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: take a number
 *
 * @argv: take a string
 *
 * Return: 0 or 1
*/
int main(int argc, char **argv)
{
	int i, result;

	if (argc < 3)
	{
	printf("0\n");
	}
	else
	{
	result = 0;
	for (i = 1; i < argc; i++)
	{
	if (isdigit(*argv[i]) == 0)
	{
	printf("Error\n");
	return (1);
	}
	result += atoi(argv[i]);
	}
	printf("%d\n", result);
	}
	return (0);
}
