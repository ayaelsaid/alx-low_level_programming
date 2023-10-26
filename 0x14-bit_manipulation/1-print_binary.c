#include "main.h"
/**
 * print_binary - ...
 * @n: ...
 * Return: ...
*/
void print_binary(unsigned long int n)
{
	int i, flag;
	char bit;
	int bitscount = sizeof(unsigned long int) * 8;

	if (n == 0)
		printf("0");
	flag = 0;
	for (i = bitscount - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (flag == 1)
		{
			_putchar(bit + '0');
		}
		else if (bit == 1)
		{
			_putchar(bit + '0');
			flag = 1;
		}
	}
}
