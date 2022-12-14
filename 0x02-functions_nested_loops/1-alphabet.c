#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, in lowercase, then a new
 * line
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
