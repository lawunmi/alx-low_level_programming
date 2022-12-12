#include <stdio.h>
/**
 * main - program that prints all possible combinations of
 * two two digit numbers without repetition
 * Return: 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if ((i < j) && (i != j))
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

				if (i != 98 && j != 99)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}

		}
	}
	return (0);
}