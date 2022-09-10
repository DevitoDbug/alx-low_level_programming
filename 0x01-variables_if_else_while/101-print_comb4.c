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
	int k;

	for (k = 48; k <= 57 ; k++)
	{
		for (i = k + 1; i <= 57; i++)
		{
			for (j = i + 1; j <= 57; j++)
			{
				putchar(k);
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57 && k == 55)
				{
				}
				else
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
