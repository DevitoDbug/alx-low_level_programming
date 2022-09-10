#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Main entry point 
 *
 *Return: Always 0 (Success)
 */

int main (void )
{
	int n, last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	last_digit = n % 10;

	if (n > 5)
	{
		printf("%d %d and is greater than 5 \n", last_digit, n);
	}
	else if (n == 0)
	{
		printf("%d %d and is 0 \n", last_digit, n);
	}
	else if(n < 6 && n != 0)
	{
		printf("%d %d and is less than 6 and not 0 \n", last_digit, n);
	}
}

