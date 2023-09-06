#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - a function that concatenates all the arguments of your program
 *
 * @ac: take a number
 *
 * @av: take a string
 *
 * Return: NULL or pt
*/
char *argstostr(int ac, char **av)
{
	int i, j, n, len, size;
	char *pt;

	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	len = 0;
	while (av[i][len] != '\0')
	{
		len++;
	}
	size += len + 1;
	}
	pt = (char *)malloc(sizeof(char) * size + 1);
	if (pt == NULL)
	return (NULL);
	n = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	pt[n++] = av[i][j];
	}
	pt[n++] = '\n';
	}
	pt[n] = '\0';
	return (pt);
}
