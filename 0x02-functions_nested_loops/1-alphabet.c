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

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	return (0);
}
