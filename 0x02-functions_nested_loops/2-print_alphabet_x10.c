#include <unistd.h>
#include "main.h"

/**
 *print_alphabet_x10 - prints the letters of the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, j;
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 25; i++)
			_putchar(letters[i]);
		_putchar('\n');
	}
}
