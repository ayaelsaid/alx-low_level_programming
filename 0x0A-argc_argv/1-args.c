#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: take a number
 *
 * @argv: take a string
 *
 * Return: 0
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
