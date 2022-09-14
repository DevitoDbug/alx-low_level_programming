#include <unistd.h>

/**
 * _putchar - writes the characters to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	int i;
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	
	 for (i = 0; i <=26; i++)
		 _putchar(letters[i]);
	 _putchar('\n');
}
