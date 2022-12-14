#include <stdio.h>
#include "main.h"
/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line.
 * Resturn: 0
 *
 */
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);

			if (c == 'z')
			{
				putchar('\n');
			}
		}
	}
}
