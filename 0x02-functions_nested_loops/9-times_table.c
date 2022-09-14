#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 *times_table - prints the table nine
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x;
	int y;
	int answer;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			answer = (x * y);

			if ((answer / 10) == 0)
			{
				if (y != 0)
					_putchar(' ');
				_putchar(answer + '0');

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((answer / 10) + '0');
				_putchar((answer % 10) + '0');
				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
