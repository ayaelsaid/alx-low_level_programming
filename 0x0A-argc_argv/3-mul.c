#include <stdio.h>
#include <stdlib.h>

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
	int result;

	if (argc == 3)
	{
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
