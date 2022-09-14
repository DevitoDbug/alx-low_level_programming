#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - shows if the letter entered is lower case
 *@c: letter being tested
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
