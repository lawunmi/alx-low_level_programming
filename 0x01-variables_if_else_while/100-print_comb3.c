#include <stdio.h>
/**
 * main - prints all possible combination of two digits
 * Return: 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i == '9' && j == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (j >= '9')
		{
			j = '0';
		}
	}
	return (0);
}

