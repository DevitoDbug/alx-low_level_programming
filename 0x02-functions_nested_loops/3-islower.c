#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 *int _islower - shows if the letter entered is lower case 
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c) > 0)
		returns (1);
	else
		returns (0);
}
