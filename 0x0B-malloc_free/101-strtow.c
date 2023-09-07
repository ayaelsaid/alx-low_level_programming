#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * **strtow - a function that splits a string into words
 *
 * @str: string
 *
 * Return: newstr or NULL
*/ 
char **strtow(char *str)
{
	int i, j, k, len, ac, n, start, word;
	char *newstr;

	if (str == NULL || str == "")
		return (NULL);
	i = 0;
	start = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
		{
			k = 0;
			for (j = start; j < i; j++)
			{
				str[k][j] = str[j];
			}
		str[k][j] = '\n';
		start = i + 1;
		}
	i++;
	k++;
	}
	len = i + 1
	ac = k + 1;
	newstr = (char *)malloc(sizeof(char *) * (len + 1));
	if (newstr == NULL)
		return (NULL);
	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (word = 0; str[i][word] != '\0'; word++)
		{
			newstr[n++] = str[i][word];
		}
	newstr[n++] = '\n';
	}
	newstr[n] = '\0';
	return (newstr);
}
