#include <stdio.h>
/* print  the alphabet in lowercase, and then in uppercase */
int main(void)
{
        char ch;
/* write alphabet in lowercase */ 
	for (ch = 'a'; ch <= 'z'; ch++)
{
/* write the character in stdout */
	putchar(ch);
}
/* write alphabet in uppercase */
        for (ch = 'A'; ch <= 'Z'; ch++)
{
/* write the character in stdout */
	putchar(ch);
}
/* followed by  newline */
        putchar('\n');

	return (0);
}
