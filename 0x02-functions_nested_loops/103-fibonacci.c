#include <stdio.h>
/**
 * main - Fibonacci sequence whose values do not exceed 4000000
 * Return: 0
 *
 */
int main(void)
{
	long a, b, cnt, res, ans;

	a = 0;
	b = 1;

	for (cnt = 0; cnt < 50; cnt++)
	{
		res = a + b;
		a = b;
		b = res;

		if ((res < 4000000) && (res % 2 == 0))
		{
			ans += res;
		}

	}
	printf("%lu\n", ans);
	return (0);
}
