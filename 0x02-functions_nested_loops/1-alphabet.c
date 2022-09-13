#include "main.h"

/**
 * _putchar - writes the character each alphabet to character to the stdout
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
*/

int main(void)
{
	int i;
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i <=26; i++)
	{
		_putchar(letters[i]);
	}
	_putchar('\n');
	return (0);
}
