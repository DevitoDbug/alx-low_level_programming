#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_last_digit - prints the last digit 
 *@c: number  being manupilated
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	int x;

	x = (c % 10);
	_putchar(x + '0');
	return (0);
}
