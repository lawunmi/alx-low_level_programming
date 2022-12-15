#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 *
 */
int main(void)
{
	long a, b, cnt, res;

	a = 0;
	b = 1;

	for (cnt = 0; cnt < 98; cnt++)
	{
		res = a + b;
		a = b;
		b = res;

		printf("%ld", res);

		if (cnt == 97)
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
