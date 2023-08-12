#include <stdio.h>
/* prints the alphabet in lowercase */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
        if (ch != 'e' && ch != 'q')
{
        putchar(ch);
}

        return (0);
}
