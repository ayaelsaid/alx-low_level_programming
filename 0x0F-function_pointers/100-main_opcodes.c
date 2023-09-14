#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: ...
 * @argv: ...
 * Return: ...
*/
int main(int argc, char **argv)
{
	int i;
	int number_of_bytes;
	unsigned char *ptr;

	number_of_bytes = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (unsigned char *) main;
	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", ptr[i]);
		printf(" ");
	}
	putchar('\n');
	return (0);
}
