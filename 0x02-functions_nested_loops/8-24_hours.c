#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 *jack_bauer - prints time 
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
