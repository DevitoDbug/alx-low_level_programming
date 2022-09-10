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
	int i;

	for (i = 48; i <= 57; i++)
	{
		for (j = i; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j <= 57 && i <= 56)
			{
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
