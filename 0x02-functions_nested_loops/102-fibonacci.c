#include <stdio.h>
/**
 * main - first 50 Fibonacci numbers, starting with 1 and
 * followed by a new line
 * Return : 0
 */
int main(void)
{
	long a, b, cnt, res;
	a = 0;
	b = 1;

	for (cnt = 0; cnt < 50; cnt++)
	{
		res = a + b;
		a = b;
		b = res;
		printf("%lu", res);

		if (cnt == 49)
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
