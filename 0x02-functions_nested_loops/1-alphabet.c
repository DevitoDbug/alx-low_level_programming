#include <unistd.h>
#include "main.h"

/**
 *print_alphabet - prints the letters of the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <=25; i++)
		_putchar(letters[i]);
	_putchar('\n');
}
