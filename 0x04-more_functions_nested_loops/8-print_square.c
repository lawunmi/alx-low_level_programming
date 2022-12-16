#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square
 */

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(" ");
			_putchar('\n');

			for (j = 0; j < n; j++)
			{
				_putchar("#");
			}	
		}
	}
	else
	{
		_putchar('\n');
	}
}
