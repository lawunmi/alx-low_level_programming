#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 *
 */
int main(void)
{
	long a, b, cnt, res;

	a = 1;
	b = 2;

	for (cnt = 0; cnt < 99; cnt++)
	{
		res = a + b;
		a = b;
		b = res;

		printf("%lu", res);

		if (cnt == 98)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
