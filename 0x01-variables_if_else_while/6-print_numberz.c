#include <stdio.h>
/**
 * main - prints all single digit number of base 10 starting from 0.
 * Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
