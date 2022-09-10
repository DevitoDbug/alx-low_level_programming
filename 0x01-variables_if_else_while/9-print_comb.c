#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
		if (j < 57)
		putchar(44);
		putchar(' ');
	}
	return (0);
}
