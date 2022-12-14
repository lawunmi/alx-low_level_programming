#include <stdio.h>
#include "main.h"
/**
 * main - function that prints the alphabet, in lowercase, then a new line.
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char c;
	 
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}
