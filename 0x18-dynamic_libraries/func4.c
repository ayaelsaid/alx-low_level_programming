#include "main.h"

/**
 * _abs - Print the absolute value of an integer
 *
 * @n: take an integer for function
 *
 * Return: n
*/

int _abs(int n)
{
	if (n >= 0)
	return (n);
	if (n < 0)
	n = (-1) * n;
	return (n);
}
/**
 * _isalpha - check is lowercase or uppercase
 *
 * @c: take character form function
 *
 * Return: 0 or 1
*/
int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
	return (1);
	else if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
/**
 * _islower - check the lowercase.
 *
 * @c: take charcater for function
 *
 * Return: 1 or on success 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *	On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - ...
 * @s: ...
 * Return: ...
*/

void _puts(char *s)
{
	int i = 0;

	while (s && s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

