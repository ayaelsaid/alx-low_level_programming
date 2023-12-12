#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: take a string
 *
 * Return: 0 or (res * num)
*/
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *t;
	int p;

	num = 0;
	p = 1;
	sign = 1;
	t = s;
	while (*t != '\0')
	{
		if (*t == '-')
			sign *= -1;
		else if (*t >= '0' || *t <= '9')
			num = (num * 10) + (*t - '0');
		else if (*t < 48 && *t > 57)
		{
			p = 0;
			break;
		}
		t++;
	}
	if (p == 0)
		return (0);
	return (num * sign);
}
/**
 * char *_strcpy - a function that copies a string
 *
 * @dest: pointer points to first character
 *
 * @src: pointer points to second character
 *
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	dest[i] = '\0';
	}
	return (dest);
}
/**
 * _strlen - Function that returns the length of a string
 *
 * @s: string
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}
/**
 * _isdigit - function that checks input is a digit or not
 *
 * @c: take the integer
 *
 * Return: 1 if it is a digit or 0 if not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
/**
 * _isupper - function that checks if character is uppercase or  not
 *
 * @c: check the character
 *
 * Return: return 1 if 'c' is uppercase, return 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
