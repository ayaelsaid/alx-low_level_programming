#include <stdio.h>


/**
 * main - entry point
 *
 * Description: declare characters
 *
 * Return: 0(success)
*/

int main(void)
{
	char ch;
/* write alphabet in lowercase */
	for (ch = 'a'; ch <= 'z'; ch++)
/* write the character in stdout */
		putchar(ch);
/* write alphabet in uppercase */
	for (ch = 'A'; ch <= 'Z'; ch++)
/* write the character in stdout */
		putchar(ch);
/* followed by newline */
		putchar('\n');
	return (0);
}
