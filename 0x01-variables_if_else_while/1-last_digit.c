#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	y = n % 10;
	printf("Last digit of n %d is %d \n", n, y);

	if (y > 5)
	{
		printf("and is greater than 5 \n");
	}
	else if (y == 0)
	{
	        printf("and is 0 \n");
	}
        else if (y < 6 && y != 0)
	{
	        printf("and is less than 6 and not 0 \n");	
	}


	return (0);
}
