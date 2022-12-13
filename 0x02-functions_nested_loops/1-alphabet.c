#include <stdio.h>
/**
 * main - function that prints the alphabet, in lowercase, then a new line.
 * Return: 0
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
