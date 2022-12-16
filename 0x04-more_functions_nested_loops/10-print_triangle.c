#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = n; j >= i; j--)
				_putchar(' ');
				for (k = 1; k <= i; k++)
				{
					_putchar('#');
				}
		_putchar('\n');
		}
	}
	_putchar('\n');
}
