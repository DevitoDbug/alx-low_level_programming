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
	int i;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			putchar(i);
			putchar(j);
			putchar(44);
		}
	putchar('\n');
	return (0);
}
