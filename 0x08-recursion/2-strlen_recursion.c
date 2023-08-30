#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: take a string
 *
 * Return: 1 + _strlen_recursioni + 1)
*/
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
	i++;
	return (1 + _strlen_recursion(i + 1));
