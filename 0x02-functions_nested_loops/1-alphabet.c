#include <unistd.h>

/**
 *main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet (void)
{
	int i;
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <=26; i++)
		_putchar(letters[i]);
	_putchar('\n');
}
