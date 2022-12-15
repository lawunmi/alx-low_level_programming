#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, n, res;

	for (i = 0; i <= 9; i++)
	{
		n = i;
		for (j = 0; j <= 9; j++)
		{
			res = n * j;
			printf("%d", res);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
